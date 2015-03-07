#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	if ( n == 0) cout << "CAP GUANYADOR" << endl;
	else {
	vector <string> name(n);
	vector <int> number(n);
	for(int i = 0; i < n ; ++i) cin >> name[i] >> number [i];
	int q;
	cin >> q;
	int k = -1;
	for(int i = 0 ; i < n; ++i) {
		int best = 0;
		if ( number[i] <= q){
			if ( best < q + number[i]) {
				best = q+number[i];
				++k;
				if ( i > k) k = i;
			}
		} 
	}

	if(k == -1) cout << "CAP GUANYADOR" << endl;
    else cout <<"guanyador/a: "<< name[k] << endl;
}
}	