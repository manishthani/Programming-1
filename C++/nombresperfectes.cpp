#include <iostream>
using namespace std;

bool es_perfecte(int n){
	int cont = 1;
	if(n == 1) return false;
	for(int i = 2; i*i <= n; ++i){
		if(n % i == 0){
			cont += i;
			cont += n/i;
       		if (cont > n) return false;
		}
	}
	if( cont == n) return true;
	return false;	
}

int main(){
	int n;
	cin >> n;
	if( es_perfecte(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}