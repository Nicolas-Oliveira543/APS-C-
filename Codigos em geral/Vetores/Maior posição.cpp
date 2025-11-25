#include <iostream>
using namespace std;
int main(){
    int vetor[1000], n, maior, posicao;
    cout<<"Quantos numeros voce vai digitar? ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite um numero: ";
        cin>>vetor[i];
    }
    maior = vetor[0];
    posicao = 0;
    for(int i=1; i<n; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    cout<<"MAIOR VALOR = "<<maior<<endl;
    cout<<"POSICAO DO MAIOR VALOR = "<<posicao<<endl;
}