
#include <iostream>
using namespace std;

int main (){
char c;
int cont = 0;
while ( cin >> c and cont >=0){
	if ( c == '(') ++cont;
	else --cont;
	}
if ( cont == 0) cout << "yes" << endl;
else cout << "no" << endl;
}