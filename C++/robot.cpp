#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<char> >Matriucar;
int main(){
	int cas;
	cin >> cas;
	while( cas > 0){
		int n, x, y; 
		cin >> n >> x >> y;
		Matriucar rob(n, vector<char>(n));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> rob[i][j];
			}
		}
		vector<vector<bool> > aux(n + 2,vector<bool> (n+2,false));

		Matriucar big(n+2, vector<char> (n+2, '0'));
		for(int i = 1; i < n+1; ++i ){
			for(int j = 1; j < n+1; ++j){
				big[i][j] += rob[i-1][j-1] - '0';
			}
		}
		bool trobat = false;
		int i = x+1;
		int j = y+1;
		while(not trobat){
			if (big[i][j] == 'N'){
				aux[i][j] = true;
				--i;
			}
			if (big[i][j] == 'S'){
				aux[i][j] = true;
				++i;	
			}
			if (big[i][j] == 'E'){
				aux[i][j] = true;
				++j;
			}
			if (big[i][j] == 'W'){
				aux[i][j] = true;
				--j;	
			}
			if( big[i][j] == '0'){
				cout << "escape" << endl;
				trobat = true;
			}
			if (big[i][j] == 'X'){
				cout << "kaputt" << endl;
				trobat = true;
			}
			if ( aux[i][j]){
				cout << "no escape" << endl;
				trobat = true;	
			}	
		}
		--cas;
	}
}