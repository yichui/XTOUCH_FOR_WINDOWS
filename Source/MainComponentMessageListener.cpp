#include <Windows.h>
#include "MainComponentMessageListener.h"
#include "MainComponentMessage.h"
#include "MainComponent.h"
#include "GlobalCompactComponent.h"


extern MainComponent *pMainComponent;
extern volatile bool ToStartThrd02;
extern GlobalCompactComponent *pGlobalCompactComponent;

/*******************************************************************************
**  Abstract: MessageListener callback函数
**
**  Parameters: 
**
**  Returns: 
*******************************************************************************/
void MainComponentMessageListener::handleMessage(const Message &message)
{
    MainComponentMessage & pMainComponentMessage = (MainComponentMessage &)(message);

    if(String(*(pMainComponentMessage.GetMessageName())).compare("EDITEDCHANGE_red") == 0)  // SendText 文本框
    {
        if(pMainComponentMessage.GetMessageData() == 0x01)
        {
            pMainComponent->ChangeEditedButtonIm();
        }
    }
    else if(String(*(pMainComponentMessage.GetMessageName())).compare("EDITEDCHANGE_close") == 0)  // SendText 文本框
    {
        if(pMainComponentMessage.GetMessageData() == 0x01)
        {
            pMainComponent->ChangeEditedButtonImClose();
            pMainComponent->repaint();
        }
    }
    else if(String(*(pMainComponentMessage.GetMessageName())).compare("toStartThread2") == 0)  // SendText 文本框
    {
        if(pMainComponentMessage.GetMessageData() == 0x01)
        {
            ToStartThrd02 = 1;
        }
    }
	else if (String(*(pMainComponentMessage.GetMessageName())).compare("Alertwindow") == 0)  // SendText 文本框
	{
		if (pMainComponentMessage.GetMessageData() == 0x01)
		{
			AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
				"Don't get layer from xtouch or get layer error",
				"    please restart xtouch or the software",
				"Close",
				nullptr,
				nullptr);
		}
	}
	
    

}



