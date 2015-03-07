
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n; 
	cin >> n;
	vector<int> v(n);
	vector<int> pos(n);
	vector<int> cero(n,0);

	for(int i = 0; i < n; ++i) cin >> v[i];

	for(int k = 0; k< n ; ++k) cin >> pos[k];

	for(int j = 0; j < n ; ++j) cero[pos[j]] += v[j];
	for(int l = 0; l < n-1; ++l) cout << cero[l] << " ";

	cout << cero[n-1]<< endl;
}