#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

Matrix producte( const Matrix& A , const Matrix& B){
	int n = A.size();
	int m = B[0].size();
	int p = B.size();
	Matrix C (n,vector<int> (p,0));
	for(int j = 0; j < p; ++j){
		for(int k = 0; k < m; ++k){
			for(int i = 0; i < n; ++i ){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return C;
}

//////////////////////////////////////////////////////////////////////

int anulla_digits(int d, int n){
	if ( n == 0) return n;
	else if (n%10 == d) return anulla_digits(d,n/10)*10;
	else  return n%10 + anulla digits(d,n/10)*10;
}

//////////////////////////////////////////////////////////////////////

int cicles (const vector<int>& v){
	int n = v.size();
	int cicles = 0;
	vector<bool> recorregut(n,false);
	for(int i = 0; i < n; ++i){
		int j = i;
		if ( not recorregut[j]){
			++cicles;
			while( not recorregut[j]){
				v[j] = true;
				j = v[j];
			}
		
		}
	}
	return cicles;
}
//////////////////////////////////////////////////////////////////////
MAL MAL MAL MAL MAL MAL
MAL MAL MAL MAL MAL MAL
MAL MAL MAL MAL MAL MAL
struct lectura{
	int num_abonat;
	double consum;
};

void abonats( const vector<lectura>& a){
		int n = v.size();
		int suma = 0;
		int contador,mitjana;
		for(int i = 0; i < n ; ++i){
			suma += a.num_abonat[i];
			++contador;
		}
		mitjana = suma / contador;
		mitjana *= 2;
		for(int j = 0; j < n; ++j){
			if( mitjana > a.num_abonats[j]) cout << a.num_abonat[j] << endl;
		}
}
MAL MAL MAL MAL MAL MAL
MAL MAL MAL MAL MAL MAL
MAL MAL MAL MAL MAL MAL




