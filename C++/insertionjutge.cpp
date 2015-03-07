#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Ocean;

void propagate( Ocean& oc, int f){
	int n = oc.size();
	int k = 0;
	for(int i = 0; i < n ; ++i){
		for(int j= 0; j < n; ++j){
			if ( i + j == k) {
				oc[i][j] += f;
				++k;
			}
			if ( j == 0 or i == oc.size-1){
				oc[i][j] = f + oc[i][j] - ((f + oc[i][j])/2);
				f = (f+oc[i][j]/2);
			}
			cout << oc[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n,f; 
	cin >> n >> f;
	Ocean ock(n, vector<int> (n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> ock[i][j];
		}
	}
	propagate(ock,f);
}