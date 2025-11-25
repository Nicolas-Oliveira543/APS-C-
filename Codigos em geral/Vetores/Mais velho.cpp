#include <iostream>
using namespace std;
int main(){
    int idade[1000], n,maioridade;
    string nome[1000], maisvelho;
    cout<<"Quantas pessoas voce vai digitar? "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite o nome da "<<i+1<<"a pessoa: "<<endl;
        cin>>nome[i];
        cout<<"Digite a idade da "<<i+1<<"a pessoa: "<<endl;
        cin>>idade[i];
    }
    maioridade = idade[0];
    maisvelho = nome[0];
    for(int i=1; i<n; i++){
        if(idade[i]>maioridade){
            maioridade = idade[i];
            maisvelho = nome[i];
        }
    }
    cout<<"PESSOA MAIS VELHA: "<<maisvelho<<endl;
}