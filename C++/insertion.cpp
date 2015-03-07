#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Alumne{
	string nom;
	int dni;
	vector<Assignatura> ass;
};

struct Assignatura {
	string nom;
	double nota;
};

double nota(const vector<Alumne>& alumns,int dni,string nom){
	int n = Alumne.ass.size();
	for(int i = 0; i < n; ++i){
		int m = alumns[i].ass.size();
		if ( alumns[i].nom == " ") return -1;
		else {
			for(int j= 0; j < n ; ++j){
				if(alumns[i].ass[j].nom != nom or alumns[i].ass[j].nota == -1) return -1;
				else return alums[i].ass[j].nota;
			}
		}
	}
}

