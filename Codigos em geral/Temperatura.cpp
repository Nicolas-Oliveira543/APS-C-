#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string tipo;
    double celsius, fahrenheit;
    cout<<fixed<<setprecision(2);
    cout<<"Digite o tipo de temperatura a ser convertida (C/F): ";
    cin>>tipo;
    if(tipo == "C" || tipo == "c"){
        cout<<"Digite a temperatura em Celsius: ";
        cin>>celsius;
        fahrenheit = (celsius * 9.0/5.0) + 32.0;
        cout<<"Temperatura equivalente em fahrenheit: "<<fahrenheit<<endl;
    }
    else if(tipo == "F" || tipo == "f"){
        cout<<"Digite a temperatura em Fahrenheit: ";
        cin>>fahrenheit;
        celsius = (fahrenheit - 32.0) * 5.0/9.0;
        cout<<"Temperatura equivalente em celsius: "<<celsius<<endl;
    }
}