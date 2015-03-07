#include <iostream>
using namespace std;
int main(){
	const double mig = 0.5;
	double x; 
	cin >> x;
	int inf = int(x);
	cout << inf << " ";
	if(inf != x) cout << inf +1 << " ";
	else cout << inf << " "; 
	if(x < double(inf + mig)) cout << inf << endl;
	else cout << inf +1 << endl;
}