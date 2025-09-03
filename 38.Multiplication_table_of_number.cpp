#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter the number: " << endl;
	cin >> n;
	

	int m;
        cout << "Multiplication table of the " << n << " is "<<endl;
	for(int i = 1 ; i <= n ; i++){
	m=i*n;
	cout << n <<" x "<< i <<" = "<< m <<endl;
 	}
return 0;
}
		
