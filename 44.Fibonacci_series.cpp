#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many terms: ";
    cin >> n;

    int a = 0, b = 1;
 
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " "; //the a is printed
        int next = a + b; //then a is added to b
        a = b;//then a is then changed to b values which is the first value
        b = next;//then b is changed to added value which is the second value
    }

    return 0;
}

