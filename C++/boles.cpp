#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int cop = m;
	while(m > 0){
		vector<string> v(n,'.');
		int dre,posdre,esq,posesq;
		cin >> dre ;
		while(dre > 0){
			cin >> posdre
			v[posdre] = '>';
			--dre;
		}
		cin >> esq;
		while(esq > 0){
			cin >> posesq;
			v[posesq] = '<';
		}
		bool primer = false;
		if(not primer){
			for(int i = 0; i < n-1; ++i) cout << v[i] << " ";
			cout << v[n-1] << endl;
		}
		else{

		if(v[])
		--m;
	}
}