#pragma once

#include <QObject>
#include <PureMVC/PureMVC.hpp>

using PureMVC::Patterns::Mediator;
using PureMVC::Patterns::StdContainerAggregate;
using PureMVC::Interfaces::IMediator;
using PureMVC::Interfaces::INotification;

class LoginMediator :  public QObject ,public Mediator
{
    Q_OBJECT
public:
    LoginMediator(void const* view);
    virtual ~LoginMediator(void);

    virtual Mediator::NotificationNames listNotificationInterests(void) const;
    virtual void handleNotification(INotification const& notification);

public slots:
    void onLogin();
};
