#include <iostream> 
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

int sum_diagonals(const Matrix& mat){
	int n= mat.size();
	int sumd1;
	sumd1 = 0;
	for(int i = 0; i < n; ++i){
		sumd1 += mat[i][i] + mat[n-i-1][i];
	}
	if( n % 2 != 0) sumd1 -= mat[n/2][n/2];
	return sumd1;
}

int main(){
	int n;
	while(cin >> n){
		Matrix A( n, vector<int>(n));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> A[i][j];
			}
		}
		cout << sum_diagonals(A) << endl;
	}
}

