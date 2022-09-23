#ifndef _CHECKING_ACCOUNT_
#define _CHECKING_ACCOUNT_

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &checking_account);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr const double def_withdraw_fee = 1.5;

// protected:
//     double withdraw_fee;

public:
    // Checking_Account(std::string name = def_name, double balance = def_balance, double withdraw_fee = def_withdraw_fee);
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};

#endif // _CHECKING_ACCOUNT_