#include <iostream>
using namespace std;


int recursion(int a, int n){
        if(n==0) return 1;
        return a * recursion(a,n - 1);


 }

int main() {
    int a,n;
    cout << "Enter base and exponent: ";
    cin >> a >> n;
    int power=recursion(a,n);
    cout << "Power of the number : " << power;
    return 0;
}

	
