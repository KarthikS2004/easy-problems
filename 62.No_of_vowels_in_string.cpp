#include <iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string a;
    int count=0;
    char l;
    cout<<"Enter a string : ";
    getline(cin,a);
     
    for(char c:a){
    l=tolower(c);        
    if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
    {
        ++count;
    }
    }
    cout<<"Number of Vowels : "<<count;
    return 0;
}
