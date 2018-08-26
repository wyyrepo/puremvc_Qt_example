#pragma once

#include <PureMVC/PureMVC.hpp>

using PureMVC::Interfaces::INotification;
using PureMVC::Patterns::SimpleCommand;

class LoginCommand : public SimpleCommand
{
public:
    LoginCommand(void);
    virtual ~LoginCommand(void);

private:
    void execute(INotification const& notification);
};
