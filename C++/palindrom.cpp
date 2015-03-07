#include <iostream>
#include <vector>
using namespace std;

/*  1)Funcion que compruebe si es palindromo .
	2) Funcion que compruebe si es primo usando Sieve os Erathostenes. 
	3) Si es palindromo y primo , guarda dicho numero en un vector auxiliar 
	inicializado a 0 de 750 elementos
	4) Cuando entremos un valor, este sera la posicion del vector auxiliar creado antes
*/

const int num = 9817189;
typedef vector<bool> Vector;

// Comprueba si el numero es palindromo o no
int reverse ( int n){
	int i = 0;
	while ( n > 0){
		i = 10*i + n%10;
		n /= 10;
	}
	return i;
}
bool is_reverse(int n){
	if( n != reverse(n) ) return false;
	return true;
}
// Crea un vector de booleanos y pone valor false a los no primos y no palindromos
Vector prime(int n){
	vector<bool> v(n+1,true);
	int x = v.size();
	v[0] = v[1] = false;
	for(int i = 2; i  < x; ++i){
		if(v[i]){								// si ponemos esto sera mucho mas eficiente
			for(int j = 2*i; j < x; j += i){
				v[j] = false;
			}
		}  
		if( not is_reverse(i)) v[i] = false;
	}
	return v;
}

int main(){
	vector<bool> aux( num + 1, true);
	aux = prime(num);
	
	// Crea vector auxiliar de enteros para guardas los primeros 750 numeros primos y palindromos
	vector<int> aux2(750);
	int k = 0;
	for(int i = 0; k < aux2.size(); ++i){
		if(aux[i]) {
			aux2[k] = i;
			++k;
		}
	}
	int x;
	while(cin >> x){
		cout << aux2[x-1] << endl;
	}
}
