#include <iostream>
using namespace std; 
int main() {
    char c;
    int total = 0;
    int n = 1;
    while (cin >> c) {
        if (c >= '0' and c <= '9') {
            int enter = c - '0';                            
            while (cin >> c and c >= '0' and c <= '9') {    
                enter *= 10;
                enter += c - '0';
            }
            total += (enter * n);                            
            n = 1;                                          
        }
       	if (c == '-') n *= -1;                          
        if(c == '.') {
        	cout << total << endl;
        	total = 0;
       	}
    }                              
}