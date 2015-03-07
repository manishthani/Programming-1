#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Llibre {
	string autor;
	string titol;
	int pagines;
};

typedef vector<Llibre> Biblioteca;


bool comp(LLibre a, LLibre b){
	return a.autor < b.autor;
}


int biblio( const Biblioteca& b){
	int n = 0;
	sort(b.begin(),b.end(),comp);
	
}