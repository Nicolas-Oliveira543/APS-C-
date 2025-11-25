#include <iostream>
using namespace std;
int main(){
    int venda[1000],compra[1000],n,lucro1, lucro2,lucro3,somacompra=0,somavenda=0;
    cout<<"Serao digitados dados de quantos produtos? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Preco de compra do produto "<<i+1<<": ";
        cin>>compra[i];
        cout<<"Preco de venda do produto "<<i+1<<": ";
        cin>>venda[i];
    }
    lucro1=0;
    lucro2=0;
    lucro3=0;
    for(int i=0;i<n;i++){
        double lucro=((double)venda[i]-compra[i])/(double)compra[i]*100.0;
        if(lucro<10.0){
            lucro1++;
        }
        else if(lucro<=20.0){
            lucro2++;
        }
        else{
            lucro3++;
        }
    }
    for(int i=0;i<n;i++){
        somacompra+=compra[i];
        somavenda+=venda[i];
    }
    cout<<"Lucro abaixo de 10%: "<<lucro1<<endl;
    cout<<"Lucro entre 10% e 20%: "<<lucro2<<endl;
    cout<<"Lucro acima de 20%: "<<lucro3<<endl;
    cout<<"Valor total de compra: "<<somacompra<<endl;
    cout<<"Valor total de venda: "<<somavenda<<endl;
    int lucrototal=somavenda-somacompra;
    cout<<"Lucro total: "<<lucrototal<<endl;
}