#include <iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	double mom;
	double bin = 0;
	double i = 1 ;
	while ( x > 0){
		mom = (x % 2);
		bin += mom * i;
		x /= 2;
		i *= 10; 
	}

	cout << bin << endl;
}