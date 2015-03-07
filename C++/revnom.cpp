#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<vector<int> > Matrix;

void row(const Matrix& a,int t){
	int n = a.size();
	for(int i = 0; i < n-1; ++i) cout << a[i][t] << " ";
	cout << a[n-1][t];
}

void column(const Matrix& b, int k){
	int m = b[0].size();
	for(int j = 0; j < m-1; ++j) cout << b[k][j] << " ";
	cout << b[k][m-1];
}

void element(const Matrix& c, int x,int y){
			cout << c[x][y];
		
	
}

int main(){
	int n,m;
	cin >> n >> m;
	Matrix A (n,vector<int>(m));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> A[i][j];
		}
	}
	string s;
	while (cin >> s){
		int p,r;
		cin >> p;
		if( s == "row"){
			cout << "row " << p << ": ";
			column(A,p-1);
			cout << endl;
		}
		if( s == "column"){
			cout << "column " << p << ": ";
			row(A,p-1);
			cout << endl;
		}
		if( s == "element") {
			cin >> r;
			cout << "element " << p << " " << r << ": " ;
			element(A,p-1,r-1);
			cout << endl;
		}
	}
}