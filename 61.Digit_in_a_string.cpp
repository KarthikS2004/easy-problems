#include <iostream>
#include <string>
#include <cctype>  
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    bool digit = false;
    for (char c : s) {
        if (isdigit(c)) {   
            digit = true;
            break; 
        }
    }
    if (digit)
        cout << "The string contains a digit." << endl;
    else
        cout << "The string does NOT contain any digit." << endl;
    return 0;
}
