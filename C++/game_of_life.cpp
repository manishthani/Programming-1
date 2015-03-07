#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matrix;


bool is_bacteria(const Matrix& mat, int& i, int& j){
	int n = mat[0].size();
	int m = mat.size();
	int cont = 0;
	if( mat[i+1][j] == 'B' and mat[i+1][j] != '0') ++cont;
	if( mat[i][j+1] == 'B' and mat[i][j+1] != '0') ++cont;
	if( mat[i+1][j+1] == 'B' and mat[i+1][j+1] != '0') ++cont;
	if( mat[i-1][j] == 'B' and mat[i-1][j] != '0') ++cont;
	if( mat[i][j-1] == 'B'and mat[i][j-1] != '0') ++cont;
	if( mat[i-1][j-1] == 'B' and mat[i-1][j-1] != '0') ++cont;
	if( mat[i+1][j-1] == 'B' and mat[i+1][j-1] != '0') ++cont;
	if( mat[i-1][j+1] == 'B' and mat[i-1][j+1] != '0') ++cont;
	
	if (cont == 2 or cont == 3) return true;
	else return false;
}

bool is_empty (const Matrix& mat, int& i , int& j){
	int n = mat[0].size();
	int m = mat.size();
	int cont = 0;
	if( mat[i+1][j] == 'B' and mat[i+1][j] != '0') ++cont;
	if( mat[i][j+1] == 'B' and mat[i][j+1] != '0') ++cont;
	if( mat[i+1][j+1] == 'B' and mat[i+1][j+1] != '0') ++cont;
	if( mat[i-1][j] == 'B' and mat[i-1][j] != '0') ++cont;
	if( mat[i][j-1] == 'B'and mat[i][j-1] != '0') ++cont;
	if( mat[i-1][j-1] == 'B' and mat[i-1][j-1] != '0') ++cont;
	if( mat[i+1][j-1] == 'B' and mat[i+1][j-1] != '0') ++cont;
	if( mat[i-1][j+1] == 'B' and mat[i-1][j+1] != '0') ++cont;
	
	if (cont == 3) return true;
	else return false;
}


int main(){
	int n, m;
	cin >> n >> m;
	int space = 0;
	while(n != 0 and m != 0){
		Matrix mat( n, vector<char> (m));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cin >> mat[i][j];
			}
		}
		if ( space != 0) cout << endl; ++space;

		// Insertamos la matriz de entrada en otra matriz para que quede rodeada de ceros.
		Matrix aux (n + 2,vector<char>(m + 2,'0'));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				aux[i+1][j+1] += (mat[i][j] -'0');
			}
		}
		Matrix aux2 (n + 2,vector<char>(m + 2,'0'));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				aux2[i+1][j+1] += (mat[i][j] -'0');
			}
		}

		// Analizamos la matriz auxiliar y guardamos las modificaciones en la nueva matriz actual
		Matrix act (n + 2,vector<char>(m + 2,'0'));
		for(int i = 1; i < n + 1; ++i){
			for(int j = 1; j < m + 1; ++j){
				if(aux[i][j] == 'B'){
					if(is_bacteria(aux,i,j)) act[i][j] = 'B';
					else act[i][j] = '.';
				}
				if(aux[i][j] == '.'){
					if(is_empty(aux,i,j)) act[i][j] = 'B';
					else act[i][j] = '.';
				}
			}
		}
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				cout << act[i][j];
			}
			cout << endl;
		}
		cin >> n >> m;
	}
}
