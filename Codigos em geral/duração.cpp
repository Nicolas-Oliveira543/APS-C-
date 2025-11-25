#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int duracao,tempseg,tempmin,temphora;

    cout << "Digite a duração em segundos: ";
    cin >> duracao;
    tempmin=(duracao%3600)/60;
    temphora = duracao / 3600;
    tempseg=duracao%60;

    cout << "Tempo em horas: " << temphora << " Tempo em minutos: " << tempmin<< " Tempo em segundos: " << tempseg;

    return 0;
}