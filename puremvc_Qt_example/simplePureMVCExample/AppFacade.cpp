#include "AppFacade.h"

#include "StartUpCommand.h"
#include "LoginCommand.h"

#include "ConstString.h"

AppFacade::AppFacade(void)
    :Facade(this, APP_FACADE_NAME)
{

}

AppFacade::~AppFacade(void)
{

}

AppFacade& AppFacade::getInstance(void)
{
    if (Facade::hasCore("AppFacade"))
    {
        return *(dynamic_cast<AppFacade*>(&Facade::getInstance(APP_FACADE_NAME)));
    }
    return *(new AppFacade());
}

void AppFacade::initializeFacade(void)
{
    Facade::initializeFacade();

    RegisterAllCommand();
}

void AppFacade::RegisterAllCommand()
{
    //×¢²áÆô¶¯ÃüÁî
    registerCommand(STR_NOTIFY_STARTUP, new StartUpCommand());

    //×¢²áµÇÂ½ÃüÁî
    registerCommand(STR_NOTIFY_LOGIN, new LoginCommand());
}

void AppFacade::startUp(void * appView)
{
    sendNotification(STR_NOTIFY_STARTUP, appView);
}