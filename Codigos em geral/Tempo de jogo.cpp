#include <iostream>
using namespace std;
int main(){
    int inicio,fim,duracao;
    cout<<"Hora inicial: "<<endl;
    cin>>inicio;
    cout<<"Hora final: "<<endl;
    cin>>fim;
    if(fim>inicio){
        duracao=fim-inicio;
    }else if(fim<inicio){
        duracao=(24-inicio)+fim;
    }else{
        duracao=24;}
    cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
}