#include <iostream>
#include <vector>
using namespace std;

int producte(int a, int b){
	if ( a == 0 and b == 0) return 0;
	else return a%10 * b%10 + producte(a/10,b/10);
}

int main(){
	int n,m;
	cin >>n >>m;
	cout << producte(n,m) << endl;
}