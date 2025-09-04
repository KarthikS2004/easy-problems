#include <iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter the number: ";
        cin >> n;

        for(int k=2;k<=n;k++){
	int count = 0;
	   for(int i=1;i<=k;i++){
	       if(k % i== 0){
	       count++;

           }
        }

	if(count == 2){
	cout <<k<<" ";
        }
        }

return 0;
}
