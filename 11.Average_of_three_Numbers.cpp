#include <iostream>
using namespace std;

int main(){
    int number1,number2,number3;
    cout << "Enter a three numbers:"<< endl;
	cin >> number1 >> number2 >> number3;
    int Average = (number1 + number2 + number3) / 3;
	cout << "Average of three numbers is:" << Average;

return 0;
}
