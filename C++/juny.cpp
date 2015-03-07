#include <iostream>
#include <vector>
using namespace std;
 
int minimum(const vector<int>& A) {
    int n = A.size();
    int m = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] < m) m = A[i];
    }
    return m;
}
 
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i){
        cin >> A[i];
    }
cout << minimum(A) << endl;
}