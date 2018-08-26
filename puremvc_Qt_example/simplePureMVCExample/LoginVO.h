#if !defined(__LOGIN_VO__)
#define __LOGIN_VO__

#include <string>

namespace data
{
    struct LoginVO
    {
        std::string strUsername;
        std::string strpassward;
        std::string strLoginRst;
    };
}

#endif /* __LOGIN_VO__ */