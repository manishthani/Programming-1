#include <map>
#include <iostream>
#include <string>
using namespace std;

int main(){
	map<string,int> m;
	string x;	
	while(cin >> x) ++m[x];
	for(map<string,int>::iterator it = m.begin(); it != m.end(); ++it){
		cout << it->first << " " << it->second << endl;
	}
}