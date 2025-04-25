#include <iostream>
using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies;
    int total_cents, dollars, cents;

    cout << "Please enter number of coins:\n";

    cout << "# of quarters: ";
    cin >> quarters;

    cout << "# of dimes: ";
    cin >> dimes;

    cout << "# of nickels: ";
    cin >> nickels;

    cout << "# of pennies: ";
    cin >> pennies;

    total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

    dollars = total_cents / 100;
    cents = total_cents % 100;

    cout << "The total is " << dollars << " dollars and " << cents << " cents." << endl;

    return 0;
}
