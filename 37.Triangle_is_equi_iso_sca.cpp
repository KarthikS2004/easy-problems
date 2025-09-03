#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout << "Enter the sides: " << endl;
	cin >> a >> b >> c;

	if(a+b>c &&  b+c>a && a+c>b){
		if(a==b && b==c && a==c){
		cout << "The triangle is equilateral";
		}
		else if(a==b || b==c || a==c){
		cout << "The traingle is isosceles";
		}
		else{
		cout << "The traingle is scalene"; 
	}}
	else{
             cout << "The traingle is not valid";
	}
	
return 0;
}
