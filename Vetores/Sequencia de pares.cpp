#include <iostream>
using namespace std;
int main(){
    int n, pares=0;
    cout<<"Quantos numeros voce vai digitar? ";
    cin>>n;
    int vetor[9999];
    for(int i=0;i<n;i++){
        cout<<"Digite um numero: ";
        cin>>vetor[i];
        if(vetor[i]%2==0){
            pares++;
        }
    }
    cout<<"Numeros pares: ";
    for(int j=0;j<n;j++){
        if(vetor[j]%2==0){
            cout<<vetor[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Quantidade de pares: "<<pares<<endl;
}