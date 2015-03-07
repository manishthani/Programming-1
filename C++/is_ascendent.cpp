#include <iostream>
using namespace std;

bool es_ascendent(int n){
	int z = n;
	if( n > 9){
		while ( n > 0 ){
			if((n % 10) -1 != (n %100)/10) return false;
			n /= 10;
		}
		else return true;
	}
	else {
		if( )
	}
}

int main(){
	int n; 
	cin >> n;
	if( es_ascendent(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
