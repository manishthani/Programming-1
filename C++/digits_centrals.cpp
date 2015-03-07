#include <iostream>
using namespace std;

int contar_digits(int n){ // Va bien
	if(n < 10) return 1;
	else return 1 + contar_digits(n/10);
}

int digit_central(int n){ // Va bien
	int m = contar_digits(n);
	m /= 2;
	while(m > 0){
		n /= 10;
		--m;
	}
	n %= 10;
	return n;
}

int main(){
	int n;
	cin >> n;
	int m = 2 * n;
	int cont = 0;
	bool par = false;
	char c = '=';
	int num,cen;
	cin >> num;
	int dig = contar_digits(num);

	if(dig % 2 == 0 ){
		c = 'B';
		par = true;
	}
	if (dig % 2 != 0){
		cen = digit_central(num);
	}
	int com = cen;
	--m;

	while(m > 0){
		cin >> num;
		++cont;
		--m;
		dig = contar_digits(num);
		if(dig % 2 == 0 and not par){
			par = true;
			if(cont % 2 != 0){
				c = 'A';
			}
			else c = 'B';
		}
		if(dig % 2 != 0 and not par){
			cen = digit_central(num);
			if(cen != com){
				if(cont % 2 != 0){
					c = 'A';
				}
				else c = 'B';
			}
		}
	}
	cout << c << endl;
}