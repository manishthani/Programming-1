#include <iostream>
using namespace std;

char codificat (char c , int k){
	k = k % 26;
	char x = c + char(k) - ('a' - 'A');
	if( x > 'Z'){
		int dif = x - 'Z';
		x = 'A' + dif - 1;
	}
	return x; 
}

int main(){
	int x;
	while(cin >> x){
		char c;
		cin >> c;
		while (c != '.'){
			if( c <= 'z' and c >= 'a'){
				cout << codificat(c,x);
				cin >> c;
			}
			else if(c == '_'){
				cout << " " ;
				cin >> c;
			}
			else {
				cout << c ;
				cin >> c;
			}
		}
		cout << endl;	
	}
}