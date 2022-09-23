#include "Trust_Account.h"

// Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double deposit_bonus)
//     : Savings_Account{name, balance, int_rate}, deposit_bonus{deposit_bonus}, withdraw_limit_percent{def_withdraw_limit_percent}, num_withdraw_limit{def_num_withdraw_limit}, num_withdrawls{} {}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawls{} {}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    // os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " << account.deposit_bonus << "]";

    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawls: " << account.num_withdrawls << "]";

    return os;
}

bool Trust_Account::deposit(double amount)
{
    if (amount >= def_deposit_bonus_threshold)
        amount += def_deposit_bonus;

    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    // first check if we havent exceeded the max num of withdrawls
    // and check if the amount is less than 20% of the account balance
    if (num_withdrawls >= def_num_withdraw_limit || amount > def_withdraw_limit_percent * balance)
        return false;
    else
    {
        // increment num_withdrawls and withdraw the amount
        num_withdrawls++;
        return Savings_Account::withdraw(amount);
    }
}
