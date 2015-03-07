#include <iostream>
using namespace std;

int digit_central(int n){
	int m = 9;
	m /= 2;
	while(m > 0){
		n /= 10;
		--m;
	}
	n %= 10;
	return n;
}

int main(){
	int n;
	cin >> n;
	cout << digit_central(n) << endl;
}