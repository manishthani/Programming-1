#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int x;
    cin >> x;
    while (x > 0) {
        int n;
        cin >> n;
        double suma, cont, min, max;
        suma = cont = min = max = 0.0;
        bool uno = true;
        while (n > 0) {
            double m;
            cin >> m;
            if (uno) {
                min = m;
                max = m;
                suma += m;
                ++cont;
                uno = false;
            }
            else {
                if (m < min) min = m;
                if (m > max) max = m;
                suma += m;
                ++cont;
            }
            --n;
        }
        cout << min << " " << max << " " << suma/cont << endl;
        --x;
    }
}