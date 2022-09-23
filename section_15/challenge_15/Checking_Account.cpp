#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double withdraw_fee)
    : Account{name, balance}, withdraw_fee{withdraw_fee} {}

std::ostream &operator<<(std::ostream &os, const Checking_Account &checking_account)
{
    os << "[Checking Account: " << checking_account.name << ": " << checking_account.balance << ", " << checking_account.withdraw_fee << "]";
    return os;
}

bool Checking_Account::withdraw(double amount)
{
    // check if there is enough balance including withdraw fee
    if (balance >= amount + withdraw_fee)
    {
        balance -= withdraw_fee;
        return Account::withdraw(amount);
    }
    else
        return false;
}