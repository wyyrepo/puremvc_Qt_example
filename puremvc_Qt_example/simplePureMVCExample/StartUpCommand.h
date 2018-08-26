#pragma once

#include <PureMVC/PureMVC.hpp>

using PureMVC::Interfaces::INotification;
using PureMVC::Patterns::SimpleCommand;

class StartUpCommand : public SimpleCommand
{
public:
    StartUpCommand(void);
    virtual ~StartUpCommand(void);

private:
    void execute(INotification const& notification);
};
