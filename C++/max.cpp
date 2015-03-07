#include <iostream>
#include <vector>
using namespace std;


int position_maximum(const vector<double>& v,int m){
	int max = 0; 
	for(int i = 0; i <= m; ++i){
		if( v[i] > v[max]){
			max = i;
		}
	}
	return max;
}

int main(){
	int n;
	cin >> n;
	vector<double> v(n);
	for(int i = 0; i < n ; ++i) cin >> v[i];
	cout << position_maximum(v,n) << endl;
}