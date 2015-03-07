int digit_central(int n){
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
	cout << digit_central(n) << endl;
}