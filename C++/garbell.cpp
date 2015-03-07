#include <iostream>
#include <vector>
using namespace std;

typedef vector<bool> Vector;

Vector prime ( vector<bool>& v){
	int n = v.size();
	v[0] = v[1] = false;
	for(int i = 2 ; i*i < n; ++i){
		if (v[i]){
			for(int j = 2*i; j < n; j += i){
				v[j] = false;
			}
		}
	}
	return v;
}

int main(){
	Vector v(1000001, true);
	v = prime(v);
	int x;
	while(cin >> x){
		if( v[x]) cout << x << " is prime" << endl;
		else cout << x << " is not prime" << endl;
	}
}