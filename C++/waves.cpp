#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Ocean; 

vector<int> diagonal(const Ocean& oc, int& k){
	int n = oc.size();
	vector<int> aux(2*n - 1,0);
	for(int i = 0; i < n; ++i){
		aux[i] = (k + oc[i][0]) - ((k + oc[i][0])/2);
		k = (k+oc[0][i])/2;
	}
	for(int i = 1 ; i < n; ++i){
		aux[i + n - 1] += (k + oc[n-1][i]) - ((k + oc[n-1][i])/2);
		k = (k + oc[n-1][i])/2; 
	}
	return aux;
}

void propagate(Ocean& oc, int f){
	int n = oc.size(); 
	vector<int> aux(2*n -1);
	aux= diagonal(oc,f);
	for(int i = 0; i< 2*n -1; ++i){
		for(int j = 0; j< n; ++j){
			for(int l =0 ; l < n; ++l)
			if ( j + l == i){
				oc[j][l] = aux[i];
			}
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j <n; ++j){
			if( j != n-1){
				cout << oc[i][j] << " ";
			}
			else cout << oc[i][j];
		}
		cout << endl;
	}
}

int main(){
	int x;
	cin >> x;
	while( x > 0){
		int n,h;
		cin >> h >> n;
		Ocean ola ( n , vector<int> (n));
		for(int i = 0; i < n; ++i){
			for(int j= 0; j<  n; ++j){
				cin >> ola[i][j];
			}
		}
		vector<int> aux(2*n -1);
		propagate(ola,h);
		--x;
		cout << endl;
	}
}