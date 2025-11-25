#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double valorunidade,valortotal,quantidade, pago, troco;
    cin >> fixed >> setprecision(2);
    cout<<"Preço unitario do produto: "<<endl;
    cin>>valorunidade;
    cout<<"Quantidade comprada: "<<endl;
    cin>>quantidade;
    valortotal=valorunidade*quantidade;
    cout<<"Dinheiro recebido: "<<endl;
    cin>>pago;
    troco=pago-valortotal;
    if(troco<0){
        cout<<"DINHEIRO INSUFICIENTE. FALTAM R$ "<<troco<<" REAIS"<<endl;
    } else {
        cout<<"TROCO = "<<troco<<endl;
    }
}