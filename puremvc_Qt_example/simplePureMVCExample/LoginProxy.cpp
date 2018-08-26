#include "LoginProxy.h"

#include "AppFacade.h"

#include "ConstString.h"

LoginProxy::LoginProxy(void)
    :Proxy(LOGIN_PROXY_NAME, "")
{
}

LoginProxy::~LoginProxy(void)
{
}

bool LoginProxy::RequsetToLogin(data::LoginVO & loginValue)
{
    loginValue.strLoginRst = "welcome " + loginValue.strUsername + ", login Success!";
    m_loginValue = loginValue;
    AppFacade::getInstance().sendNotification(STR_NOTIFY_LOGIN_SUC);
    return true;
}

std::string LoginProxy::GetLoginRst(void)
{
    return m_loginValue.strLoginRst;
}
