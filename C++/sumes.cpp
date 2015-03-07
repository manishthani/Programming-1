#include <iostream>
using namespace std;
int main(){
	char c;
	cin >> c;
	int menos,mas,sum; 
	menos = mas = sum = 0;
	int def = 1;
	int i = 1;
	while ( c != '.'){
		if(c == '-'){
			++menos;
			if(menos % 2 != 0) def = -1;
			else def = 1;
		}
		if( c >= '0' and c <= '9'){
			int enter = c - '0';
			while (cin >> c and c >= '0' and c <= '9') {    
                enter *= 10;
                enter += c - '0';
            }
			sum += enter * def;
			def = 1;
			menos = 0;
			mas = 0;
		} 
		cin >> c;
	}
	cout << sum << endl;
}