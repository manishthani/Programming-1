#include <iostream>
#include <vector>
using namespace std;

void insertar(vector<int>& v, int& i, int& j,int x){
	if(x% 2 == 0){
		int j = i;
		while( j > 0 and v[j] > x ){ 
			v[j+1] = v[j];
			--j;
		}
	}

	if( x % 2 == 1){
		int p = j;
		while( j < v.size -1 and v[j-1] > x){
			v[j-1] = v[j];
			++j;
		}
	}
}

//////////////////////////////////////////////////////////////

int barreja( int a , int b){
	if ( b == 0) return 0;
	else  return b%10 + a%100/10 + barreja(a/10, b/10)*100;
}

///////////////////////////////////////////////////////////////
NI IDEANI IDEANI IDEANI IDEANI IDEANI IDEA
NI IDEANI IDEANI IDEANI IDEANI IDEANI IDEA
NI IDEANI IDEANI IDEANI IDEANI IDEANI IDEA
struct Acces{
	string nom_fitxer;
	Data data;
};

typedef vector<Acces> Accessos;

int mida_en_bytes(string nom_fitxer){
	NI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEA
}NI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEANI IDEA
NI IDEANI IDEANI IDEANI IDEANI IDEA
NI IDEANI IDEANI IDEANI IDEANI IDEA
NI IDEANI IDEANI IDEANI IDEANI IDEA