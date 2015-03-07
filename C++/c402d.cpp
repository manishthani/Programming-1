#include <iostream>
#include <vector>
#include <string>
using namespace std;

string gira(string s){
	string b;
	for(int i = s.size()-1;i >= 0; --i) b += s[i];
	return b;
}


int main(){
	string a,b;
	while(cin >> a >> b){
		if ( a == b or a == gira(b)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	
}