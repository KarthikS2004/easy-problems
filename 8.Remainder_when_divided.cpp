# include <iostream>
using namespace std;

int main(){
	int Number1,Number2;
	cout << "Enter the Number1 and Number2:" << endl;
	cin  >> Number1 >> Number2;
	int  Remainder;
	Remainder=Number2 % Number1;
	cout << "The Remainder  is:" << Remainder;
	return 0;
}
