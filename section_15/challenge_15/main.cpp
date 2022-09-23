// Section 15
// Challenge
#include <iostream>
#include <vector>
#include "Account_Util.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    /*
        // Accounts
        vector<Account> accounts;
        accounts.push_back(Account{});
        accounts.push_back(Account{"Larry"});
        accounts.push_back(Account{"Moe", 2000});
        accounts.push_back(Account{"Curly", 5000});

        display(accounts);
        deposit(accounts, 1000);
        withdraw(accounts, 2000);

        // Savings

        vector<Savings_Account> sav_accounts;
        sav_accounts.push_back(Savings_Account{});
        sav_accounts.push_back(Savings_Account{"Superman"});
        sav_accounts.push_back(Savings_Account{"Batman", 2000});
        sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

        display(sav_accounts);
        deposit(sav_accounts, 1000);
        withdraw(sav_accounts, 2000);

    // Checking

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Pete"});
    check_accounts.push_back(Checking_Account{"Greg", 2000});
    check_accounts.push_back(Checking_Account{"Alex", 5000, 3.0});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    */

    // Trust

    vector<Trust_Account> check_accounts;
    check_accounts.push_back(Trust_Account{});
    check_accounts.push_back(Trust_Account{"Sam"});
    check_accounts.push_back(Trust_Account{"Steve", 2000});
    check_accounts.push_back(Trust_Account{"Sophie", 5000, 3.0});
    check_accounts.push_back(Trust_Account{"Sven", 5000, 3.0, 100.0});

    display(check_accounts);
    // deposit(check_accounts, 1000);
    deposit(check_accounts, 6000);
    withdraw(check_accounts, 2000);

    return 0;
}
