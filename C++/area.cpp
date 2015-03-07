#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(6);
	int n; 
	cin >> n;
	while ( n > 0){
		string s;
		cin >> s;
		if ( s == "rectangle"){
			double a, b;
			cin >> a >> b;
			cout << a * b << endl;
		}
		if( s == "cercle"){
			double r;
			cin >> r;
			cout << M_PI * (r * r) << endl;

		}
		--n;
	}
}