#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;   // this will only take a single word (no spaces)

    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A') {   // check for 'a' or 'A'
            count++;
        }
    }

    cout << "The number of occurrences of the character 'a' : " << count << endl;

    return 0;
}

