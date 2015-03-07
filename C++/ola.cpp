#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

Matrix matriz( const Matrix& A, const Matrix& B){
	int n = A.size();
	int m = A[0].size();
	int p = B[0].size();
	Matrix C (n, vector<int> (p,0));
	for(int j = 0; j < m; ++j ){
		for(int k = 0; k < n; ){
			for(int i = 0; i < p; ++i){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return C;
}