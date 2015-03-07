#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
bool es_vocal(char s){
    if (s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u') return true;
    else return false;
}
 
bool alternance (string s){
    bool trobat ;
    if (s.size() != 0 or s.size() != 1){
        int j = 1;
        while(j < s.size() and trobat){
            if (es_vocal(s[j - 1]) and es_vocal(s[j])) trobat = false;
            else if (not es_vocal(s[j - 1]) and not es_vocal(s[j])) trobat = false;
            ++j;
        }
    }
    return trobat;
}
 
int main(){
    int n;
    string s, ant;
    while (cin >> n){
        int cont = 0;
        if (n != 0){
            cin >> ant;
            for (int i = 1; i < n; ++i){
                cin >> s;
                if (alternance(ant)== true and alternance(s) == false) ++cont;
                else if (alternance(ant) == false and alternance(s) == true) ++cont;
                ant = s;
            }
        }
        cout << cont << endl;
    }
}