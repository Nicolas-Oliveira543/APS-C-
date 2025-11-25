#include <iostream>
#include <string>
using namespace std;

double Pagamento(double valorhora, int horastrabalhadas) {
    return valorhora * horastrabalhadas;
}
int main(){
    string nome;
    double valor;
    int horas;
    cout << "Nome do funcionário: ";
    getline(cin, nome);
    cout << "Horas trabalhadas: ";
    cin>>horas;
    cout << "Valor por hora: ";
    cin>>valor;
    cout<<"O funcionário "<<nome<<" deve receber R$ "<<Pagamento(valor, horas);
}