#include <iostream>
using namespace std;
int main(){
	string s ;
	string k;
	cin >>  k ;
	bool iguals;
	while(cin >> s){
		if ( s != k ) iguals = false;
		else  iguals = true;
		cout << iguals << endl;

	}
}