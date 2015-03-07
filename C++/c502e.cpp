#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Persona {
	string nom;
	bool dona;
	int edat;
};

int main(){
	int n;
	cin >> n;
	int max = 0;
	vector<Persona> lista(n);
	vector<string> sexo(n);
	for(int i = 0; i < n; ++i){
		cin >> lista[i].nom >> sexo[i] >> lista[i].edat;
	}

	for(int k = 0; k < n; ++k){
		if ( sexo[k] == "home") lista[k].dona = false;
		else lista[k].dona = true; 	
		if ( not lista[k].dona ){
			if ( lista[k].edat > max) max = lista[k].edat;
		}
	}
	for(int j = 0; j < n; ++j){
		if ( lista[j].dona and lista[j].edat < max) cout << lista[j].nom << " " << lista[j].edat << endl;
	}
}