# include <iostream>
using namespace std;

int main(){
	char Var1,Var2;
	cout << "Enter the Variable1 and Variable2:" << endl;
	cin  >> Var1 >> Var2;
        char temp =  0;
        temp = Var1;
        Var1  = Var2;
        Var2 = temp;

	cout << "After swapped Variable1:" << Var1 << endl;
        cout << "After swapped Variable2:" << Var2;

	return 0;
}
