#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double nota, soma = 0.0;
    int valid = 0;
    while (valid < 2 && cin >> nota) {
        if (nota < 0.0 || nota > 10.0) {
            cout << "nota invalida"<<endl;
        } else {
            soma += nota;
            valid++;
        }
    }
    cout << fixed << setprecision(2);
    cout << "media = " << (soma / 2.0) << endl;
    return 0;
}