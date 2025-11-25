#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int codigo, quantidade;
    double valor;
    cout<<fixed<<setprecision(2);
    cout<<"Codigo do produto comprado:"<<endl;
    cin>>codigo;
    cout<<"Quantidade comprada:"<<endl;
    cin>>quantidade;
    if(codigo==1){
        valor=5*quantidade;
        cout<<"Valor a pagar: "<<valor<<endl;
    } else if(codigo==2){
        valor=3.5*quantidade;
        cout<<"Valor a pagar: "<<valor<<endl;
    } else if(codigo==3){
        valor=4.8*quantidade;
        cout<<"Valor a pagar: "<<valor<<endl;
    } else if(codigo==4){
        valor=8.9*quantidade;
        cout<<"Valor a pagar: "<<valor<<endl;
    } else if(codigo==5){
        valor=7.32*quantidade;
        cout<<"Valor a pagar: "<<valor<<endl;
}