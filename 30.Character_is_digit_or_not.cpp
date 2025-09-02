#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
   char ch;
   cout << "Enter the Character:";
   cin >> ch;
   if(isdigit(ch)){
	cout << "Is a  digit";
}
   else{
	cout << "Is not a digit";
}
return 0;
}

