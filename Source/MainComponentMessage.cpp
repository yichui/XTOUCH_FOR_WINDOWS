#include "MainComponentMessage.h"




/*******************************************************************************
**  Abstract: ����message ������
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
**  Abstract: ��ȡmessage ������
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
**  Abstract: ����Graphics �� Location 
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
**  Abstract: ����Graphics �� Location 
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
unsigned char MainComponentMessage::GetMessageData()
{
    return MessageData;
}






