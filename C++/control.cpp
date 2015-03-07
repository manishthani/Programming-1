#include <iostream>
#include <vector>
using namespace std;

int producte_estrellat(int a, int b){
	if ( a == 0 or b == 0) return 0;
	else return (a % 10) * (b % 10) + producte_estrellat(a/10, b/10); 
}

int main(){
	int a;
	int b;
	cin >> a >> b;
	cout << producte_estrellat(a,b) << endl;
}