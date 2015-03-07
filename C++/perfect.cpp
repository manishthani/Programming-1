#include <iostream>
using namespace std;

bool is_prime(int n){
	if (n < 2) return false;
	for(int i = 2; i*i <= n; ++i){
		if( n%i == 0) return false;
	}
	return true;
}

int s(int n){
	if( n < 10) return n;
	else return s(n/10) + n%10;
}

bool is_perfect_prime(int n){
	if(is_prime(n)){
		if(s(n) < 10) return is_prime(s(n));
		else return is_perfect_prime(s(n));
	}
	else return false;
}


int main(){
	int n;
	cin >> n;
	cout << is_perfect_prime(n) << endl;
}