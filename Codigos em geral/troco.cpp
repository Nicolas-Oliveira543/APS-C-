#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double troco, valorrecebido, valorunitario;
    int qtda;

    cout<<"preco unitario do produto: ";
    cin>> valorunitario;

    cout<<"quantidade comprada: ";
    cin>> qtda;

    cout<<"valor recebido: ";
    cin>> valorrecebido;

    troco = valorrecebido - (valorunitario * qtda);
    cout<<fixed<<setprecision(2);
    cout<<"troco = "<<troco;
    
    return 0;
}