#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector<vector<int> >& t){
	int n = t.size();
	int ref,sumc,sumf,sumd2,sumd1 ;
	sumc = sumf= ref= sumd2 = sumd1 = 0; 
	bool equal;
	for(int i = 0; i < n; ++i) ref += t[0][i];
	
	for(int i = 0; i < n ; ++i){
		for(int j = 0; j < n; ++j){
			if(t[i][j] < 1 or t[i][j] > n*n) return false;
			sumc += t[i][j];
			sumf += t[j][i];
		}
		if ( ref != sumc or ref != sumf) return false;
		sumc = sumf = 0;
	}
	
	for(int i = 0; i < n; ++i){
		sumd1 += t[i][i];
		sumd2 += t[n-i-1][i];
	}
	if ( sumd2 != ref or sumd2 != ref) return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	vector<vector<int> > Matrix(n, vector<int> (n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> Matrix[i][j];
		}
	}
	cout <<  quadrat_magic(Matrix)<< endl;
}