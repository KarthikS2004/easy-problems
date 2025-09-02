#include <iostream>
using namespace std;

int main(){
    int base,exponent;
    cout << "Enter Base and Exponent:";
    cin >> base >> exponent;
    long long result=1;

    for(int i=1;i<=exponent;i++){
	result=result*base;
}
    cout << base << "^" << exponent << "*" << result << endl;
	return 0;
}
