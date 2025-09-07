#include <iostream>
#include <string>
#include <algorithm>   // for transform
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // takes full sentence including spaces

    // Convert to uppercase
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);

    // Convert to lowercase
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;

    return 0;
}
