#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number : ";
	cin >> n;

        int even=0;
        for(int i=1;i<=n;i++){
          if(i%2 == 0){
	      even = even + i;
           }
	}
	cout << "Sum of all even number from 1 to "<<n<<":"<<even;
}
