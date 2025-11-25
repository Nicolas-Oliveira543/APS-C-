#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,C,R,S,cobaias,total;
    string tipo;
    cout<<"Quantos casos de teste serao digitados? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Quantidade de cobaias: "<<endl;
        cin>>cobaias;
        cout<<"Tipo de cobaia: "<<endl;
        cin>>tipo;
        if(tipo=="C", tipo=="c"){
            C+=cobaias;
        }
        else if(tipo=="R", tipo=="r"){
            R+=cobaias;
        }
        else if(tipo=="S", tipo=="s"){
            S+=cobaias;
        }
    }
    total=C+R+S;
    cout<<"RELATORIO FINAL: "<<endl;
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<S<<endl;
    double pC=(C*100.0)/total;
    double pR=(R*100.0)/total;
    double pS=(S*100.0)/total;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<pC<<" %"<<endl;
    cout<<"Percentual de ratos: "<<pR<<" %"<<endl;
    cout<<"Percentual de sapos: "<<pS<<" %"<<endl;
}