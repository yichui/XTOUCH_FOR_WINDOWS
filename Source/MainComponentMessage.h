#ifndef __MAIN_COMPONENT_MESSAGE_H__
#define __MAIN_COMPONENT_MESSAGE_H__


#include "JuceHeader.h"




/*******************************************************************************
**  Abstract: Graphics message class
**
**  
**
**  
*******************************************************************************/
class MainComponentMessage  : public Message
{
public:
    MainComponentMessage(const String& sN, unsigned char ul):MessageName(sN),MessageData(ul){}
    ~MainComponentMessage(){}

    void SetMessageName(const String& sMessageName);
    String * GetMessageName();

    void SetMessageData(unsigned char bData);
    unsigned char GetMessageData();


private:    
    String MessageName;
    unsigned char MessageData;
};



#endif


