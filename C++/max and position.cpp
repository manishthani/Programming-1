// Pre: Enter a sequence of numbers.
// Post : Prints the position of the largest number of the sequence and its position.
#include <iostream>
#include <vector> 
using namespace std;

void max(const vector<int>& name){
int g , j ;
g = j = 0;
int m = name.size();
for(int i = 0; i < m;++i){
	if (name[i] > g) {
		g = name[i];
		if(j < i) j = i;
	}
}
cout << g << " " << j << endl;
}
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n ; ++i){
		cin >> v[i];
	}
	max(v);
}