#include <iostream>
#include <vector>
using namespace std;

struct Racional {
	int num,den;
};


int mcd (int a,int b){
	while (b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int mcm (int a, int b){
	return( (a * b) / mcd(a,b));
}

Racional suma(const Racional& a, const Racional& b){
	Racional c;
	if(a.den == b.den){
		c.num = a.num + b.num;
		c.den = a.den;
	}
	else {
	 	c.den = mcm(a.den,b.den);
	 	a.num = (a.num) *(c.den / a.den);
	 	b.num = (b.num) *(c.den / b.den);
	 	c.num = a.num + b.num;
	}
	return c;
}

Racional resta(const Racional& a, const Racional& b){
	Racional c;
	if(a.den == b.den){
		c.num = a.num - b.num;
		c.den = a.den;
	}
	else {
	 	c.den = mcm(a.den,b.den);
	 	a.num = (a.num) *(c.den / a.den);
	 	b.num = (b.num) *(c.den / b.den);
	 	c.num = a.num - b.num;
	}
	return c;
}

Racional producte(const Racional& a, const Racional& b){
	Racional c;
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	return c;
}

Racional divisio(const Racional& a, const Racional& b){
	Racional c;
	c.num = a.num * b.den;
	c.den = a.den * b.num;
	return c;
}

int main(){
	Racional a,b,c;
	cin >> a.num >> a.den >> b.num >> b.den;
	c = suma(a,b);
	cout << c.num << " " << c.den << endl; 
}