#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matrix;

//Busqueda dicotomica

int posicio( const vector<string>& word, string s, int esq, int dre){
	if ( esq > dre) return -1;
	int pos = (esq + dre)/2;
	if( word[pos] > s) return posicio(word,s,esq,pos - 1);
	else if(word[pos] < s) return posicio(word,s,pos + 1, dre);
	else return pos;
}

bool esta(const vector<string>& biblio, const vector<string>& tab){
	int n = biblio.size()-1;
	for(int i = 0; i < tab.size(); ++i){
		int x = posicio(biblio,tab[i],0,n);
		if( x == -1) return false;
	}
	return true;
}


bool simetric ( const vector<string>& c){
	int n = c.size();
	for(int i = 0; i < n - 1; ++i){
		for(int j = i+1; j < n; ++j){
			if(c[i][j] != c[j][i]) return false;
		}
	}	
	return true;
}

int main(){
	int x;
	cin >> x;
	vector<string> biblio(x);
	int t = biblio.size();
	for(int i = 0; i < t; ++i){
		cin >> biblio[i];
	}

	int n;
	cin >> n;
	while ( n != 0){
		vector<string> tab (n);
		for(int i = 0; i < n; ++i) cin >> tab[i];
		
		if (esta(biblio,tab)){
			if(simetric(tab)) cout << "SI" << endl;
			else cout << "NO" <<endl;
		}
		else cout << "NO" << endl;
		
		cin >> n;
	}
}
