#include "LoginCommand.h"
#include "AppFacade.h"

#include "LoginVO.h"
#include "loginProxy.h"
#include "loginMediator.h"

#include "ConstString.h"

LoginCommand::LoginCommand()
      :SimpleCommand()
{
}

LoginCommand::~LoginCommand(void)
{
}

void LoginCommand::execute(INotification const& notification)
{
    data::LoginVO * loginData = (data::LoginVO *)notification.getBody();

    if (NULL != loginData)
    {
        IFacade &facade = AppFacade::getInstance();

        LoginProxy* proxy = dynamic_cast<LoginProxy*>(&AppFacade::getInstance().retrieveProxy(LOGIN_PROXY_NAME));
        proxy->RequsetToLogin(* loginData);
    }

}