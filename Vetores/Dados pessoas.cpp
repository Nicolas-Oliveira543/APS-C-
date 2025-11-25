#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int altura[1000],n,contF=0,contM=0;
    string genero[1000];
    cout<<"Quantas pessoas serao digitadas? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Altura da "<<i+1<<"a pessoa: "<<endl;
        cin>>altura[i];
        cout<<"Genero da "<<i+1<<"a pessoa: "<<endl;
        cin>>genero[i];
    }
    double somaAlturaF=0,maiorAltura=altura[0],menorAltura=altura[0];
    for(int i=0;i<n;i++){
        if(genero[i]=="F" || genero[i]=="f"){
            somaAlturaF+=altura[i];
            contF++;
        }
        else if(genero[i]=="M" || genero[i]=="m"){
            contM++;
        }
        if(altura[i]>maiorAltura){
            maiorAltura=altura[i];
        }
        if(altura[i]<menorAltura){
            menorAltura=altura[i];
        }
    }
    double mediaAlturaF=0.0;
    cout<<fixed<<setprecision(2);
    cout<<"Menor altura = "<<menorAltura<<endl;
    cout<<"Maior altura = "<<maiorAltura<<endl;
    mediaAlturaF=somaAlturaF/contF;
    cout<<"Media das alturas das mulheres = "<<mediaAlturaF<<endl;
    cout<<"Numero de homens = "<<contM<<endl;
}