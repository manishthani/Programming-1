#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;



void dimensions_minimes(char c,const Rectangle& r, int& fils, int& cols){
	int sumf,sumc;
	sumf = sumc = 0;
	for(int i = 0; i < fils; ++i){		
		for(int j = 0; j < cols; ++j){
			if( r[i][j] == c){
				++sumf;
				if( j != cols-1){
					++j;
				}
			} 
			if ( r[j][i] == c){
				++fils;
				if(i != fils-1){
					++sumc;	
				}
				
			} 

		}
	}
	cout << sumf << sumc << endl;
}

int main(){
	int n,m;
	char d;
	cin >> n >> m >> d;
	Rectangle A(n, Fila (m));
	for(int i = 0; i< n ; ++i){
		for(int j = 0; j< m; ++j){
			cin >> A[i][j];
		}
	}
	dimensions_minimes(d,A,n,m);
}