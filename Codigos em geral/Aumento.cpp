#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    double salario, aumento, novosalario;
    cout<<"Digite o salario da pessoa: "<<endl;
    cin>>salario;
    if(salario <= 1000.00){
        aumento = salario * 0.20;
        novosalario = salario + aumento;
        cout<<"Novo salario = "<<novosalario<<endl;
        cout<<"Aumento = "<<aumento<<endl;
        cout<<"Porcentagem = 20 %"<<endl;
    } else if(salario <= 3000.00){
        aumento = salario * 0.15;
        novosalario = salario + aumento;
        cout<<"Novo salario = "<<novosalario<<endl;
        cout<<"Aumento = "<<aumento<<endl;
        cout<<"Porcentagem = 15 %"<<endl;
    } else if(salario <= 8000.00){
        aumento = salario * 0.10;
        novosalario = salario + aumento;
        cout<<"Novo salario = "<<novosalario<<endl;
        cout<<"Aumento = "<<aumento<<endl;
        cout<<"Porcentagem = 10 %"<<endl;
    } else {
        aumento = salario * 0.05;
        novosalario = salario + aumento;
        cout<<"Novo salario = "<<novosalario<<endl;
        cout<<"Aumento = "<<aumento<<endl;
        cout<<"Porcentagem = 5 %"<<endl;
    }
}