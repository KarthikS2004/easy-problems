#include <iostream>
using namespace std;

int main() {
    int num,reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;

    int org = num;
    while(num > 0){
	remainder = num % 10;
	reversed = reversed * 10 + remainder;
	num = num/10;
}

   if(org == reversed)
{
	cout << org << " is a palindrome number."<< endl;
}
   else{
        cout << org << " is not  a palindrome number."<< endl;
}
return 0;
}
