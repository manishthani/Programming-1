#include <iostream>
#include <vector>
using namespace std;

struct LLibre{


};

struct Soci{
	int codisoci;
	vector<int> llegits;
};

typedef vector<Soci> Lectures;

int millor_lector(const Lectures& a){
	int max = 0; 
	int posmax = 0;
	for(int i = 0; i < a.size();++i){
		int sum = 0; 
		for(int j = 0; j < a[i].llegits.size(); ++j){
			sum += a[i].llegits[j];
		}
		if( sum > max){
			posmax = i;
		} 
	}
	return a[posmax].codisoci;
}

int nombre_autors( const Biblioteca& b){

}