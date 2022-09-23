#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance} {}

std::ostream &operator<<(std::ostream &os, const Checking_Account &checking_account)
{
    // os << "[Checking Account: " << checking_account.name << ": " << checking_account.balance << ", " << checking_account.withdraw_fee << "]";
    os << "[Checking Account: " << checking_account.name << ": " << checking_account.balance << "]";
    return os;
}

bool Checking_Account::withdraw(double amount)
{
    // check if there is enough balance including withdraw fee
    if (balance >= amount + def_withdraw_fee)
    {
        balance -= def_withdraw_fee;
        return Account::withdraw(amount);
    }
    else
        return false;
}