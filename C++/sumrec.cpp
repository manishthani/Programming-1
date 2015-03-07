#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string c;
	cin >> c;
	int m = c.size();
	vector<char> v(m);
	for(int i = 0; i< m; ++i) cin >> v[i];
	int z = 10;
	int res,mod,j;
	res = mod = j = 0;
	while( j < m){
		if ( v[m-1] == 'X') v[m-1] =(v[m-1]-'0')* 10;
		else if(v[j] == '?'){
			res = z;
		}
		else{
			mod += (v[j]-'0')*z;
		}
		--z;
		++j;
	}
	cout << mod/z << endl;
}