#include <iostream>
using namespace std;
int main(){
    int vetor[1000], n,media=0;
    cout<<"Quantos elementos vai ter o vetor? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite um numero: "<<endl;
        cin>>vetor[i];
    }
    for(int i=0;i<n;i++){
        if(vetor[i]%2==0){
            media+=vetor[i];
        }
    }
    cout<<"MEDIA DOS PARES = "<<media<<endl;
}