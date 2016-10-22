#ifndef __MAIN_COMPONENT_MESSAGE_LISTENER_CLASS_H__
#define __MAIN_COMPONENT_MESSAGE_LISTENER_CLASS_H__


#include "JuceHeader.h"



/*******************************************************************************
**  Abstract: MessageListener class
**
**  
**
**  
*******************************************************************************/
class MainComponentMessageListener  : public MessageListener
{
public:
    ~MainComponentMessageListener(){}

    void handleMessage(const Message &message);
};






#endif


