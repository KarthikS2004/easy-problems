#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin >> n;
	
	int num=1;

	for(int i=1;i<=n;i++){
	num = num*i;
	
	}
	cout<<"The factorial of "<<n<<" is "<<num;
	
return 0;
}


