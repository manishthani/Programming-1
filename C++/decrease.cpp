// Pre: a non-empty vector v
// Pos: Returns its sequence in decreasing order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int n ; 
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0; i < n; ++i) cin >> v[i];
 		sort(v.begin(),v.end());				   // Orders the sequence in increasing order
		int q = v.size()-1;
 		int m = v.size()/2 ;
 		for(int j = 0  ; j < m; ++j){
 			int z = v[j];
 			v[j] = v[q-j]; 
 			v[q-j] = z; 						   // Reverses the new sequence so that the sequence will be in decreasing order
 		}
 		for(int k = 0; k < n-1; ++k) cout << v[k] << " " ;   // Returns the demanded sequence
		if ( n == 1) cout << v[0] << endl;
		else if (n == 0) cout << endl;
		else cout << v[n-1]<< endl;
	}
}