#include <iostream>
#include <string>
using namespace std;
int main() {
    double price, total_price;
    int quantity;
    const double discount = 0.1;
    string day_of_week;

    cout << "Enter the price of the item: ";
    cin >> price;

    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << "Enter the day of the week (for example Monday): ";
    cin >> day_of_week;

    if (day_of_week == "saturday" || day_of_week == "sunday") {
        total_price = price * (1 - discount) * quantity;
        cout << "Weekend discount has been applied" << endl;
    } else {
        total_price = price * quantity;
    }

    cout << "Total bill: $" << total_price << endl;

    return 0;
}
