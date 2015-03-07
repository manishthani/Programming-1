#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n; ++i){
		cin >> v[i];
	}
	int ult = v[n-1];
	int cont= 0;
	for(int i = n-1;i >= 0; --i){
		if(v[i] == ult) ++cont;
	}
	cout << cont -1<< endl;
}