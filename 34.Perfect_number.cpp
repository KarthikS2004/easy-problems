#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter the number: ";
	cin >> n;

	int sum=0;

	for(int i=1;i<n;i++)
	{
		if(n%i==0){
		sum = sum + i;
       	}
 	}
	if(sum == n){
		cout << "It is a perfect number";
	}
	else{
		cout << "It is not a perfect number";
        }

	return 0;
}

