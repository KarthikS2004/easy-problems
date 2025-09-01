# include <iostream>
using namespace std;

int main(){
	float Principal_amount, Annual_interest_rate , Time_in_years;
	cout << "Enter the Principal amount,Annual interest rate,Time in years:" << endl;
	cin  >> Principal_amount >> Annual_interest_rate >> Time_in_years;
	float Simple_interest;
	Simple_interest=(Principal_amount*Annual_interest_rate*Time_in_years)/100;
	cout << "The simple Interest is:" << Simple_interest;
	return 0;
}
