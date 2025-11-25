#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double valorhora, pagamento;
    int horastrabalhadas;

    cout << "Nome do funcionário: ";
    getline(cin, nome);

    cout << "Horas trabalhadas: ";
    cin >> horastrabalhadas;

    cout << "Valor por hora: ";
    cin >> valorhora;

    pagamento = horastrabalhadas * valorhora;
    cout << fixed << setprecision(2);
    
    cout<<"O funcionário "<<nome<<" deve receber R$ "<<pagamento;
    return 0;
}