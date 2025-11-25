#include <iostream>
using namespace std;
int main(){
    int minutos;
    double valor;
    cout << "Digite a quantidade de minutos: "<<endl;
    cin >> minutos;
    if(minutos <= 100){
        valor=50;0;
        cout << "Valor a pagar: R$ " << valor << endl;
    } else{
        valor=50.0 + ((minutos - 100) * 2.0);
        cout << "Valor a pagar: R$ " << valor << endl;
    }
}