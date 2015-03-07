#include <iostream>
using namespace std;
int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	int n;
	while(cin >> n){
		cout << "Amb " << n << " terme(s) s'obte ";
		double sum = 0;
		if(n != 0){
			int i = 1;
			while ( i < n){
				double x = i;
				double prod = 1;
				while (x > 0){
					prod *= x;
					--x;
				}
				sum += 1/prod;
				++i;
			}
			cout << sum + 1<< "." << endl;
		}
		else cout << sum << "." << endl;
	}	
}