#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;
// buscar "j" max y min  y "i" max y min

void llegir_matriu(Matriu& a){
	int n = a.size();
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
}

bool es_ok(Matriu& a){
	int n = a.size();
	int imin = n;
	int imax = 0;
	int jmin = n;
	int	jmax = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(a[i][j] == 0){
				if( imin > i) imin= i;
				if ( imax < i) imax = i;
				if( jmin > j) jmin = j;
				if (jmax < j) jmax = j;
			}
		}
	}
	for (int k = imin; k <= imax; ++k) {
		for (int l = jmin; l <= jmax; ++l) {
			if (a[k][l] == 1) return false;
		}
	}
	return true;
}

int main(){
	int m;
	cin >> m;
	for(int k = 0; k < m; ++k){
		int n;
		cin >> n;
		Matriu a(n,vector<int> (n));
		llegir_matriu(a);
		if(es_ok(a)) cout << "ok" << endl;
		else cout << "ko" << endl;
	}
	
}