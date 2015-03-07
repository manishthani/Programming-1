#include <iostream>
using namespace std;
int main(){
	int n;
	bool primer = true;
	int cont = 1;
	int ji = 0;
	while (cin >> n ){
		int x = n;
		bool trobat = true;
		string s;
		cin >> s;
		string max = s;
		--x;
		while(x > 0){
			cin >> s;
			--x;
			if( max <= s) max = s;
			else trobat = false;
		}	
		if(trobat and primer){
			ji = cont;
			primer = false;
		}
		++cont;
	}
	if(not primer) cout << "La primera linia ordenada creixentment es la " << ji << "." << endl;
	else cout << "No hi ha cap linia ordenada creixentment." << endl;
}