#include <iostream>
#include <vector>
using namespace std;
int main(){
	const int num = 10;
	vector<char> codi(num);
	while(cin >> codi[0]){
		for(int i = 1; i < codi.size(); ++i){
			cin >> codi[i];
		}
		int j = 10;
		int sum ,mul;
		sum = mul = 0;
		for(int i = 0; i < codi.size(); ++i){
			if(codi[i] == '?') mul = j;
			else if(codi[i] == 'X') sum += 10 * j ;
			else sum += (int(codi[i] - '0')) * j;
			--j;
		}
		int incog = 0;
		for(int i = 1; i <= codi.size(); ++i){
			int sum1 = sum + (mul * i);
			if( sum1 % 11 == 0) incog = i;
		}
		if(incog == 10) cout << 'X' << endl;
		else cout << incog << endl;
	}
}