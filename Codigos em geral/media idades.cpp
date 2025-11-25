#include <iostream>
using namespace std;
int main(){
    int soma=0,idade,cont=0,media;
    cout<<"Digite as idades: "<<endl;
    cin>>idade;
    if(idade<0){
        cout<<"IMPOSSIVEL CALCULAR"<<endl;
        return 0;
    }
    while(idade>=0){
        soma+=idade;
        cont++;
        cin>>idade;
    }
    media=soma/cont;
    cout<<"MEDIA = "<<media<<endl;
}