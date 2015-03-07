#include <iostream>
using namespace std;

int main(){
	int bas,loga;
	while(cin >> bas >> loga){
		int expo = 0;
		while ( 0 < loga){
			loga /= bas;
			++expo;
		}
		cout << expo -1 << endl;
	}
}