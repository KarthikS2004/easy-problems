#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.50;
  }
    else if (units <= 200) {
        bill = 100 * 1.50 + (units - 100) * 2.50;
  }
    else if (units <= 500) {
        bill = 100 * 1.50 + 100 * 2.50 + (units - 200) * 4.00;
 }
    else {
        bill = 100 * 1.50 + 100 * 2.50 + 300 * 4.00 + (units - 500) * 5.00;
 }

    cout << "Total electricity bill = Rs. " << bill << endl;

    return 0;
}
