#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double deposit_bonus)
    : Savings_Account{name, balance, int_rate}, deposit_bonus{deposit_bonus} {}

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