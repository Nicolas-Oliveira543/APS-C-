#include <iostream>
using namespace std;
int main() {
    int alcool = 0, gasolina = 0, diesel = 0, a = 0;
    while (a != 4) {
        cin >> a;
        if (a == 1) {
            alcool++;
        } else if (a == 2) {
            gasolina++;
        } else if (a == 3) {
            diesel++;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}