#include <iostream>
using namespace std;

int main(){
    int number1,number2;
    cout << "Enter a number1 and number2:"<< endl;
	cin >> number1 >> number2;


    if(number1 < number2){
	cout << number1 << " is Smaller than " << number2;
}
    else{
	cout << number2 << " is Smaller than " << number1;	
  
return 0;
}
}
