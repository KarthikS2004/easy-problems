#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number : ";
	cin >> n;
	
	int sum=0;

	while(n>0){
	int remainder = n % 10;
	sum += remainder;
	n = n / 10;}

	cout <<  "The sum of the digits : "<<sum;
}


