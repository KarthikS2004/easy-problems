# include <iostream>
# include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cout << "Enter the Values: " << endl;
	cin >> a >> b >> c;
	
	double d;
	
	d = b*b - 4*a*c;
	
	if(d>0){
	double roota,rootb;
	
	roota = (-b + sqrt(d)) / (2*a);
	rootb = (-b - sqrt(d)) / (2*a);

	cout << "The root are " << roota << " and " << rootb;
	}
	else if(d==0){
	int rootc = -b / (2.0 * a);
	cout << "The root is "<< rootc;
       }
	else{
	cout<<"Root is very complex";
}
return 0;
}

