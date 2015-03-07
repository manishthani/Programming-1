#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;

bool es_llati (const Quadrat& q){
	int n = q.size();
	vector<int> aux (n);
	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= n; ++j){
			bool trobat = false;
			for(int k = 0; k < n; ++k){
				if( q[i][k] == j) trobat = true;
			}
			if(not trobat) return false;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= n; ++j){
			bool trobat = false;
			for(int k = 0; k < n; ++k){
				if( q[k][i] == j) trobat = true;
			}
			if(not trobat) return false;
		}
	}
	return true;
}

int main(){
	int n; 
	cin >> n;
	Quadrat ola( n, Fila(n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> ola[i][j];
		}
	}
	cout << es_llati(ola) << endl;
}