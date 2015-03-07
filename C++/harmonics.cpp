#include <iostream>
using namespace std;
int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double n; 
	cin >> n;
	double cont = 0;
	while ( n > 0){
		cont += 1/n;
		--n;
	}
	cout << cont << endl;
}