#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout << "Enter the angles: " << endl;
	cin >> a >> b >> c;

	if(a>0 && b>0 && c>0){
		if(a+b+c == 180){
		cout << "The triangle is valid";
		}
		else{
		cout << "The traingle is not valid";
		}}
	else{
             cout << "Angles cannot be 0";
	}
return 0;
}
	        

	
