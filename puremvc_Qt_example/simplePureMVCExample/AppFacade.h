#pragma once

#include <PureMVC/PureMVC.hpp>

using PureMVC::Interfaces::IFacade;
using PureMVC::Patterns::Facade;

class AppFacade
    : public virtual IFacade
    , public Facade
{
    friend class Facade;

protected:
    AppFacade(void);
    ~AppFacade();

public:
    static AppFacade& getInstance(void);
    void startUp(void * appView);

protected:
    void initializeFacade(void);

private:
    void RegisterAllCommand();
};