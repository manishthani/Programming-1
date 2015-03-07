#include <iostream>
using namespace std;

int main (){
    int x, y;
    int cont = x;
    cin >> x >> y;
   	while (cont != 0){
   		--cont;
   		cin >> y;
   	}
   	if ( cont == 0) cout << "A la posicio " << x << "hi ha un " << y << endl;
   	else cout << "La posicio " << x << "no esta definida" << endl;
}

