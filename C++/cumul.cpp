#include <iostream>
#include <vector>
using namespace std;

// Pre: Sequencia de nombres enters
// Pos: Retorna maxim consecutiu de cumuls

int max_cumuls( const vector<int>& seq){ 
	int n = seq.size();
	int sum,pos;
	sum = pos = 0;
	bool trobat = false;
	vector<int> aux (n,0);

	//Emmagatzema nombre de cumuls consecutius en vector auxiliar
	for(int i = 1; i < n; ++i){
		for(int j = i-1; j >= 0 and not trobat; --j){
			sum += seq[j];
			if( sum == seq[i]){
				++aux[pos];  
				trobat = true;
			} 			
		}
		if(not trobat) ++pos;
		sum = 0;
		trobat = false;
	}

	// Calcula maxim del vector auxiliar de cumuls consecutius
	int max = 0; 
	for(int i = 0; i < n; ++i){
		if ( aux[i] > max) max = aux[i];
	}

	return max;
}


int main(){
	int n;
	while (cin >> n){
		vector<int> vol(n);
		for(int i = 0; i < n; ++i) cin >> vol[i];
		cout << max_cumuls (vol) << endl; 
	}
}