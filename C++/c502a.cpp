#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> >Matrix;

int main(){
	int n,m;
	int cont = 0;
	while (cin >> n >> m){
		++cont;
		Matrix A(n, vector<int> (m));
		int n = A[0].size();
		int m = A.size();
		for(int i = 0; i < m; ++i ){
			for(int j = 0; j < n; ++j){
				cin >> A[i][j];
			}
		}
		int j = 0;
		bool trobat = false;
		while(j < n){
			if ( j% 2 == 0){
				for(int i = 0; i < m-1 and not trobat; ++i){
					if (A[i][j] > A[i+1][j]) trobat = true;
				}
			}
			else {
				for(int i = m-1; i > 0 and not trobat; --i){
					if(A[i][j] > A[i-1][j]) trobat = true; 
				} 
			}
			++j;
		}
		int k = 0; 
		while(k < n - 1){
			if( k % 2 == 0){
				if( A[m-1][k] > A[m-1][k+1]) trobat = true;
			}
			else{
				if( A[0][k] > A[0][k+1]) trobat = true;

			}
			++k;
		}
		if(not trobat) cout <<"matriu " << cont << ": " << "si" << endl;
		else cout << "matriu " << cont << ": " << "no" << endl;

	}
}
