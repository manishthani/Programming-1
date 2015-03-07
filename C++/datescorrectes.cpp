#include <iostream>
using namespace std;
int main() {
        int dia, mes, any;
        bool Data = false;
        while (cin >> dia >> mes >> any) {
                if (mes <= 12) {
                        /* Mesos amb 31 dies */
                        if (dia <= 31 and (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12)) Data = true;
                       
                        /* Mesos amb 30 dies */
                        else if (dia <= 30 and (mes == 4 or mes == 6 or mes == 9 or mes == 11)) Data = true;
                       
                        /* Cas especial per el mes de Febrer */
                        else if (mes == 2) {
                                if ((any % 4 == 0 and any % 100 != 0) or (any % 400 == 0)) {
                                /* Cas en que es un any de traspas*/
                                        if (dia <= 29 ) Data = true;
                                        else Data = false;
                                }
                                else {
                                /* Cas en que l'any no es de traspas */
                                        if (dia <= 28) Data = true;
                                        else Data = false;
                                }
                        }
                       
                }
                else Data = false;
               
        if (Data == true) cout << "Data Correcta" << endl;
        else cout << "Data Incorrecta" << endl;
        }
}