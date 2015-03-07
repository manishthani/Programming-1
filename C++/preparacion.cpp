#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << "nombres que acaben igual que " << n << ":" << endl;
	int x;
	int uno = n % 10;
	int dos = (n % 100)/10;
	int tres = (n % 1000) / 100;
	int cont = 0;
	while(cin >> x){
		if( (x  % 10 == uno) and ((x % 100)/10 == dos) and ((x % 1000)/100 == tres)) {
			cout << x << endl;
			++cont;
		}
	}
	cout << "total: " << cont << endl;
}
