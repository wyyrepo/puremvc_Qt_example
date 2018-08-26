#pragma once
#include "LoginVO.h"

#include <PureMVC/PureMVC.hpp>

using PureMVC::Patterns::Proxy;

class LoginProxy: public Proxy
{
public:
    LoginProxy(void);
    virtual ~LoginProxy(void);

    bool RequsetToLogin(data::LoginVO & loginValue);

    std::string GetLoginRst(void);

private :
    data::LoginVO m_loginValue;
};
