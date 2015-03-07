#include <iostream>
#include <vector>
using namespace std;


struct Provincia{
	string nom;
	string capital;
	int habitants;
	int area;
	double pib;
};

struct Pais {
	string nom;
	string capital;
	vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x){
	int n = p.size();
	int total = 0;
	int cont = 0;
	int result = 0;
	for(int i = 0; i < n ; ++i) {
		int m = p[i].provs.size();
		for(int j = 0 ; j < m ; ++j){
			total += p[i].provs[j].habitants;
			if(p[i].provs[j].pib <= x ) ++cont;
		}
		if (cont >= 2) result += total;
		cont = 0;
		total = 0;
	}
	return result;
}


int main(){
}