#include <iostream>
using namespace std;
int main(){
    int vetor[1000], n,media;
    cout<<"Quantos elementos vai ter o vetor? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite um numero: "<<endl;
        cin>>vetor[i];
    }
    int soma=0;
    for(int i=0;i<n;i++){
        soma+=vetor[i];
    }
    media=soma/n;
    cout<<"MEDIA DO VETOR = "<<media<<endl;
    cout<<"ELEMENTOS ABAIXO DA MEDIA: "<<endl;
    for(int i=0;i<n;i++){
        if(vetor[i]<media){
            cout<<vetor[i]<<endl;
        }
    }
    
}