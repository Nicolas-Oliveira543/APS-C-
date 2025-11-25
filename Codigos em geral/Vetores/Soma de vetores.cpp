#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double N,soma=0;
    cout<<setprecision(1)<<fixed;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;
    double vet[10000];
    cout<<"VALORES = ";
    for (int i=0; i<N;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
        cout<<vet[i]<<" ";
        soma += vet[i];
    }
    cout<<endl;
    cout<<"SOMA = "<<soma<<endl;
    int media = soma/N;
    cout<<"MEDIA = "<<media<<endl;

}