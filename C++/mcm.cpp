#include <iostream>
using namespace std;

long long gcd (long a, long b){
	while ( b != 0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}

long long mcm (long long a, long long b){
	return ((a*b)/gcd(a,b));
}
int main(){
	int x;
	cin >> x;
	while ( x != 0){
		long long a = 1;
		for(int i = 0; i < x; ++i){
			long long y;
			cin >> y;
			long long m = mcm(a,y);
			a = m;
		}
		cout << a << endl;
		cin >> x;
	}
}