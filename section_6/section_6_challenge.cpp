// video 51

/*
Section 6
Challenge

Frank's Carpet Cleaning Service
Charges:
    $25 per small room
    $35 per large room
Sales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of small and large rooms they would like cleaned
and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

int main()
{
    const int small_room_price{25};
    const int large_room_price{35};
    const double sales_tax_rate{0.06};
    const int days_valid{30};

    int num_small_rooms{}, num_large_rooms{};

    std::cout << "Estimate for carpet cleaning service" << std::endl;

    std::cout << "Number of small rooms: ";
    std::cin >> num_small_rooms;

    std::cout << "Number of large rooms: ";
    std::cin >> num_large_rooms;

    std::cout << "Price per small room: $" << small_room_price << std::endl;
    std::cout << "Price per large room: $" << large_room_price << std::endl;

    double cost{};
    cost = small_room_price * num_small_rooms + large_room_price * num_large_rooms;
    std::cout << "Cost: $" << cost << std::endl;

    double tax{};
    tax = cost * sales_tax_rate;
    std::cout << "Tax: $" << tax << std::endl;

    std::cout << "===============================" << std::endl;

    double total{};
    total = cost + tax;
    std::cout << "Total estimate: $" << total << std::endl;

    std::cout << "This estimate is valid for " << days_valid << " days" << std::endl;

    return 0;
}

// Solution
/*
#include <iostream>

using namespace std;

int main() {

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    int small_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;

    int large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    const double  price_per_small_room {25.0};
    const double  price_per_large_room {35.0};

    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cout << "Cost : $"
            << (price_per_small_room * small_rooms) +
                  (price_per_large_room * large_rooms)
            << endl;

    cout << "Tax: $"
            << ((price_per_small_room * small_rooms) +
                   (price_per_large_room * large_rooms)) * sales_tax
            << endl;

    cout << "===============================" << endl;
    cout << "Total estimate: $"
        << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) +
              (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax)
        << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}
*/