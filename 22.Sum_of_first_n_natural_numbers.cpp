#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"The Total natural number:";
   cin >> n;
   
   int result = 0; 
   cout <<"The Sum of " << n << " natural numbers are:"<<endl;
    for(int i=1;i<=n;i++){
    result = result + i;

}
   
    cout << result <<endl;
    return 0;
}
