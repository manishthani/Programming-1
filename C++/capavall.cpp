#include <iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	while ( x != y){
		if( x < y){
			cout << y << endl;
			--y;
		}
		else {
			cout << x << endl;
			--x;
		}
	}
	cout << y << endl;
}