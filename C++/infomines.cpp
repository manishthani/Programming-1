# include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

int suma( const Matrix& aux, int& i, int& j){
	int cont = 0;
	if( aux[i+1][j] == -1 and aux[i+1][j-1]!= -2 ) ++cont;
	if( aux[i][j+1] == -1 and aux[i][j+1]!= -2 ) ++cont;
	if( aux[i-1][j] == -1 and aux[i-1][j]!= -2 ) ++cont;
	if( aux[i][j-1] == -1 and aux[i][j-1]!= -2 ) ++cont;
	if( aux[i+1][j+1] == -1 and aux[i+1][j+1]!= -2 ) ++cont;
	if( aux[i-1][j-1] == -1 and aux[i-1][j-1]!= -2 ) ++cont;
	if( aux[i+1][j-1] == -1 and aux[i+1][j-1]!= -2 ) ++cont;
	if( aux[i-1][j+1] == -1 and aux[i-1][j+1]!= -2 ) ++cont;
	return cont;
}
int main(){
	int x;
	cin >> x;
	while(x > 0){
		int n; 
		cin >> n;
		bool reject = false;
		Matrix info(n,vector<int> (n));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> info[i][j];
			}
		}
		for(int i = 0; i < n; ++i){
			if(info[i][0] != -1 or info[i][n-1] != -1) reject = true;
		}
		if (reject) cout << "reject" << endl;
		else {
			Matrix aux ( n + 2, vector<int> (n + 2,-2));
			int q = aux.size();
			for(int i = 1; i <= n; ++i){
				for(int j = 1; j <= n; ++j){
					aux[i][j] += info[i-1][j-1] + 2;
				}
			}

			for(int i = 1; i < q; ++i){
				for(int j = 1; j < q ; ++j){
					if( aux[i][j] == 0){
						aux[i][j] += suma(aux,i,j);		
					}
				}
			}

			for(int i = 1; i < n+1; ++i){
				for(int j = 1; j < n+1 ; ++j){
					if( j != n){
						if( aux[i][j] >= 0) cout <<"+" << aux[i][j] << " ";
						else cout << aux[i][j] << " ";
					}
					else cout << aux[i][j];		
				}
				cout << endl;
			}
		}
		--x;
		cout << endl;
	}
}
