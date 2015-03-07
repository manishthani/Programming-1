#include <iostream>
#include <vector>
using namespace std;
 
int evaluate(const vector<int>& p, int x) {
    int pot = 1;
    int suma = 0;
    for (int i = 0; i < p.size(); ++i) {
        suma += p[i]*pot;
        pot *= x;
    }
    return suma;
}
 
int main() {
    int n,x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i <= n; ++i) cin >> p[i];
    cout << evaluate(p,x) << endl;
}