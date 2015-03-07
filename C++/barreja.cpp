#include <iostream>
#include <vector>
using namespace std;


int pos_min(const vector<int>& v, int a, int b){
		if (  b == 0) return v.size() -1;
		else{
			for(int i = v.size-2; i >= 0; --i ){
				if ( b > v[i]) i = b;
			}
			
		}
	}
}


