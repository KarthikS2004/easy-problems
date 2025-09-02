#include <iostream>
using namespace std;

int main(){
	char ch;
        cout << "Enter the Character: ";
	cin >> ch;

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	cout << ch <<" is a vowel";
        }
        else
        {
           cout << ch << " is a consonan";
        }
return 0;
}


