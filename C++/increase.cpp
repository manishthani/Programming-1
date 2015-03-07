#include <iostream>
using namespace std;

int sum_digits(int n){
	if ( n < 10 ) return n;
	else return sum_digits(n/10) + n%10;
}

bool is_multiple_3(int n){
	if( n < 10){
		if(n == 3 or n == 6 or n == 9) return true;
		else return false;
	}
	else {
		return is_multiple_3(sum_digits(n));
	}
}


int main(){
int n ;
cin >> n;
cout << is_multiple_3(n) << endl;
}