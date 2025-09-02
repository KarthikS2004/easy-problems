#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter the number:";
   cin >> n;
   
   if(n%5==0 && n%11==0){ 
   cout << n << " is divisible by 5 and 11";
	}
   else if(n%5==0){
      cout << n << " divisible by 5 but not by 11";
}
   else if(n%11==0){
      cout << n << " divisible by 11 but not by 5";
}
   else{
      cout << n << " is not divisible by 5 and 11";
}

    return 0;
}
