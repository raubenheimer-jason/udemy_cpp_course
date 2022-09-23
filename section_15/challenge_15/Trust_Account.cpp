#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double deposit_bonus)
    : Savings_Account{name, balance, int_rate}, deposit_bonus{deposit_bonus}, withdraw_limit_percent{def_withdraw_limit_percent}, num_withdraw_limit{def_num_withdraw_limit}, num_withdrawls{} {}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " << account.deposit_bonus << "]";
    return os;
}

bool Trust_Account::deposit(double amount)
{
    if (amount > def_deposit_bonus_threshold)
        amount += deposit_bonus;

    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    // first check if we havent exceeded the max num of withdrawls
    // std::cout << "Check 1" << num_withdrawls << " " << (num_withdraw_limit - 1) << std::endl;
    if (num_withdrawls >= num_withdraw_limit)
    {
        // std::cout << "fail 1" << std::endl;
        return false;
    }
    num_withdrawls++;

    // then check if the amount is less than 20% of the account balance
    double max_withdraw_amount{withdraw_limit_percent * balance};
    if (amount > max_withdraw_amount)
    {
        // std::cout << "fail 2 --> " << withdraw_limit_percent << " * " << balance << " = " << max_withdraw_amount << std::endl;
        return false;
    }

    // otherwise withdraw the amount
    return Savings_Account::withdraw(amount);
}
