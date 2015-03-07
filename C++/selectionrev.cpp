#include <iostream>
#include <vector>
using namespace std;

void swap( int& a, int& b){
	int r = a;
	a = b;
	b = r;
}

int pos_min(const vector<double>& v,int& left, int& right){
	int pos = left;
	for(int i = left +1; i <= right; ++i){
		if ( v[i] < v[pos]) pos = i;
	}
	return pos;
}

void selection_sort (vector<double>& v, int m){
	 m = v.size()-1;
	for(int i = 0; i < m; ++i){
		int k = pos_min ( v,i,m);
		swap(v[k],v[i]);
	}
}