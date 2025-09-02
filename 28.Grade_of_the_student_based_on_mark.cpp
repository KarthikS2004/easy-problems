#include <iostream>
using namespace std;

int main(){
   int m;
   cout<<"Enter the Mark out of 100: " << endl;
   cin >> m;
    
   if(m >= 85){
	cout << "The Grade is A+";
}
   else if(m<85 && m>=70){
        cout << "The Grade is A";
}

   else if(m<70 && m>=50)
{
        cout << "The Grade is B+ ";
}
   else if(m<50 && m>=40)
{
	cout << "The Grade is B";
}
   else if(m<40 && m>=25)
{
        cout << "The Grade is C";
}
   else if(m<25 && m>=10)
{
        cout << "The Grade is D";
}
   else
{
        cout << "The Grade is F";
}

return 0;
}
