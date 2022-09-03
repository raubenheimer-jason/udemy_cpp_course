// video 74

/*
For this program I will be using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 penny is 1 cent.

Here is a sample run:

Enter an amount in cents :  92

You can provide this change as follows:
dollars    : 0
quarters : 3
dimes     : 1
nickels   : 1
pennies  : 2

Feel free to use your own currency system.
Also, think of how you might solve the problem using the modulo operator.

Have fun and test your program!!
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    cout << "Enter the number of cents: ";
    int cents{0};
    cin >> cents;
    cout << endl;

    int dollars{0};
    int quarters{0};
    int dimes{0};
    int nickels{0};
    int pennies{0};

    dollars = cents / 100;
    // quarters = (cents%100)/25;
    quarters = (cents - (dollars * 100)) / 25;
    dimes = (cents - (dollars * 100 + quarters * 25)) / 10;
    nickels = (cents - (dollars * 100 + quarters * 25 + dimes * 10)) / 5;
    pennies = cents - (dollars * 100 + quarters * 25 + dimes * 10 + nickels * 5);

    cout << "dollars:  " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes:    " << dimes << endl;
    cout << "nickels:  " << nickels << endl;
    cout << "pennies:  " << pennies << endl;

    return 0;
}

// Solution
/*

*/