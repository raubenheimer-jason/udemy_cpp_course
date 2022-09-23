#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <ostream>
#include <string>
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    // specific to Trust Account
    static constexpr double def_deposit_bonus = 50.0;
    static constexpr double def_deposit_bonus_threshold = 5000.0;
    static constexpr size_t def_num_withdraw_limit = 3;
    static constexpr double def_withdraw_limit_percent = 0.2;

protected:
    // double deposit_bonus;
    // size_t num_withdraw_limit;
    // double withdraw_limit_percent;
    size_t num_withdrawls;

public:
    // Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, double deposit_bonus = def_deposit_bonus);

    // keep it simple... didnt ask to make evrything variable to just use the constants...
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _TRUST_ACCOUNT_H_