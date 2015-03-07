#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n){
	if(n < 2) return false;
	else{
		for(int i = 2; i*i <= n; ++i){
			if(n % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0; i < n; ++i) cin >> v[i];

		bool trobat = false;
		for(int i = 1; i <= n and not trobat; ++i){
			if(is_prime(v[i-1] + v[i])) trobat = true;
		}
		if(trobat) cout << "si" << endl;
		else cout << "no" << endl;
	}
}