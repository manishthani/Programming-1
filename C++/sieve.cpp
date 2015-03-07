#include <iostream>
#include <vector>
using namespace std;

int valor(const vector<bool>& v){
	int n = v.size();
	int posicio,sumt,sumf;
	sumt = 0;
	sumf = 1;

	// Fa la suma de tots el valors true

	for(int i = 0; i < n ; ++i){
		if( v[i] == true) {		
			++sumt;
		}
	}

	// Calcula la posició de la penúltima posicio amb valor false 
	for(int j = n-1; j >= 0 and sumf != 0; --j){
		if ( v[j] == false) {
			--sumf;
			posicio = j;
		} 
	}
	int last = v.size() -2 - posicio;
	sumt -= last;
	if ( sumt%10 == last) return sumt;
	else return -1;
}
