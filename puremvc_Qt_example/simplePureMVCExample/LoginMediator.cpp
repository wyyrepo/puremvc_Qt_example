#include "LoginMediator.h"

#include "simplepuremvcexample.h"

#include "LoginVO.h"
#include "LoginProxy.h"

#include "AppFacade.h"

#include "ConstString.h"

LoginMediator::LoginMediator(void const* view)
    :Mediator(LOGIN_MEDIATOR_NAME, view)
{
    simplePureMVCExample * loginView =(simplePureMVCExample *)view;
    connect(loginView->ui.pushButton,SIGNAL(clicked()),this,SLOT(onLogin()));
}

LoginMediator::~LoginMediator(void)
{
}

Mediator::NotificationNames LoginMediator::listNotificationInterests(void) const
{
    typedef StdContainerAggregate<std::list<NotificationNames::element_type::type> > result_t;
    result_t* result = new result_t;
    result->get().push_back(STR_NOTIFY_LOGIN_SUC);
    return NotificationNames(result);
}

void LoginMediator::handleNotification(INotification const& notification)
{
    std::string notifinName = notification.getName();
    
    if (STR_NOTIFY_LOGIN_SUC == notifinName)
    {
        LoginProxy* proxy = dynamic_cast<LoginProxy*>(&AppFacade::getInstance().retrieveProxy(LOGIN_PROXY_NAME));
        std::string loginRst = proxy->GetLoginRst();

        simplePureMVCExample * loginView =(simplePureMVCExample *)getViewComponent();
        loginView->ui.label_3->setText(QString::fromStdString(loginRst));
    }

}

void LoginMediator::onLogin()
{
    simplePureMVCExample * loginView =(simplePureMVCExample *)getViewComponent();

    QString strUserName = loginView->ui.lineEdit->text();
    QString strUserpassward = loginView->ui.lineEdit_2->text();

    std::string strStdUserName = strUserName.toStdString();
    std::string strStdUserpassward = strUserpassward.toStdString();

    data::LoginVO loginVale;
    loginVale.strUsername = strStdUserName;
    loginVale.strpassward = strStdUserpassward;

    IFacade &facade = AppFacade::getInstance();
    facade.sendNotification(STR_NOTIFY_LOGIN,&loginVale);
}
