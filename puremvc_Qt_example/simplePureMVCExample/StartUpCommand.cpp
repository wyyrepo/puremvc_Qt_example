#include "StartUpCommand.h"
#include "AppFacade.h"
#include "loginProxy.h"
#include "loginMediator.h"

StartUpCommand::StartUpCommand()
      :SimpleCommand()
{
}

StartUpCommand::~StartUpCommand(void)
{
}

void StartUpCommand::execute(INotification const& notification)
{
    const void * pLoginView = notification.getBody();

    IFacade &facade = AppFacade::getInstance();

    /* 注册代理（Model）
    */
    facade.registerProxy(new LoginProxy());

    /**
    * 注册ViewComponents或者UI组件的中介器。
    */
    facade.registerMediator(new LoginMediator(pLoginView));
}