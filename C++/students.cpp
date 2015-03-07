#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiant {
	int dni;
	string nom;
	double nota;
	bool repetidor;
};
void informacio(const vector<Estudiant>& es,double& min,double& max, double& mitj){
	int n = es.size();
	max = mitj = 0;
	min = 10; 
	int presentats = 0;
	for(int i = 0; i < n ; ++i){
		if( not es[i].repetidor and es[i].nota != -1){
			if ( es[i].nota > max ) max = es[i].nota;
			if ( es[i].nota < min) min = es[i].nota;
			++presentats;
			mitj += es[i].nota;
		}
	}
	mitj /= presentats;
	if ( presentats == 0) min = max = mitj = -1;
}

int main() {
    Estudiant s1;
    Estudiant s2;
    Estudiant s3;
    s1.nota = 8;
    s2.nota = 3;
    s3.nota = -1;
    s1.repetidor = false;
    s2.repetidor = true;
    s3.repetidor = false;
    vector<Estudiant> es(3);
    es[0] = s1;
    es[1] = s2;
    es[2] = s3;
    double max, min, mitj;
    informacio(es,min,max,mitj);
    cout << max << " " << min << " " << mitj << endl;

	
}