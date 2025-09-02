#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
   char ch;
   cout << "Enter the Character:";
   cin >> ch;
   if(isalpha(ch)){
	cout << "Is a  alphabet";
}
   else{
	cout << "Is not an alphabet";
}
return 0;
}

