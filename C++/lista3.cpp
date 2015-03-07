#include <iostream>
using namespace std;

int gcd ( int a, int b){
	int r = a % b;
	a = b;
	b = r;
	return r;
}

int mcm(int a, int b){
	return ((a*b)/gcd(a,b));
}

int main(){
	int n;
	cin >> n;
	cin >> t;
	while ( n != 0){
		int k = n;
		while( k > 0){
			
			cin >> t;
		}
		cin >> n;
	}
}	