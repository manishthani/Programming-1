#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> >Matrix;

void ola ( Matrix& A){
	int k = 0;
    int t = 0;
    int x = 0;
    int y = 0;
    bool primer = false;
    int n = A.size();
  		while( k < n){
  			if( k % 2 == 0){
				for(int t = 0; t < n and not primer; ++t){ 
					if ( A[k][t] == -1) {
						x += k;
						y += t;
						primer = true;
					} 
				}
  			}
  			else{
  				for(int t = A.size() -1; t >= 0 and not primer; --t){
  					if(A[k][t] == -1){
  						x += k;
  						y += t;
  						primer = true;
  					} 
  				}
  			}
  			++k;
  		}
  	cout <<  "(" << x << "," << y << ") ";

}


int main(){
  	int n; 
  	while(cin >> n){
    	Matrix A(n, vector<int> (n));
    	for(int i = 0; i < n; ++i){
      		for(int j = 0; j < n; ++j){
				cin >> A[i][j];
      		}
    	}
    	int cont = 0;
    	int max = 0;
    	int j = 0;
    	int x = 0; 
    	int y = 0;
    	int pos1,pos2;
    	pos1 = pos2 = 0;
    	bool primer = false;
    	while(j < n){
      		if( j % 2 == 0){
				for(int i = 0; i < n; ++i){    
	  				if( A[j][i] != -1) cont += A[j][i];
	  				else{
	    				if(cont > max) {
	      					max = cont;
	      					x = j;
	      					y = i;
	    				}
	    				cont = 0;
	  				}    
				}
      		}
      		else{
				for(int i = A.size() -1; i >= 0; --i){
	  				if( A[j][i] != -1) cont += A[j][i];
	  				else{
	    				if(cont > max) {
	      					max = cont;
	      					x = j;
	     					y = i;
	    				}
	    				cont = 0;
			  		}
				}
        	}
      		++j;
      	}

      	if( max != 0) cout << "(" << x << "," << y <<") " << max << endl;  
		else {
			ola(A);
			cout << max << endl;
		}
	}  
}
