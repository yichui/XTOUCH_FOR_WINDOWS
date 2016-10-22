#include "MainComponentMessage.h"




/*******************************************************************************
**  Abstract: 设置message 的名字
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
void MainComponentMessage::SetMessageName(const String& sMessageName)
{
    MessageName = sMessageName;
}


/*******************************************************************************
**  Abstract: 读取message 的名字
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
String * MainComponentMessage::GetMessageName()
{
    return &MessageName;
}    


/*******************************************************************************
**  Abstract: 设置Graphics 的 Location 
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
void MainComponentMessage::SetMessageData(unsigned char bData)
{
    MessageData = bData;
}


/*******************************************************************************
**  Abstract: 设置Graphics 的 Location 
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
unsigned char MainComponentMessage::GetMessageData()
{
    return MessageData;
}






