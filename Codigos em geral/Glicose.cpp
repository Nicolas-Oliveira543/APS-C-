#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed<<setprecision(1);
    double glicose;
    cout<<"Digite a medida de glicose: "<<endl;
    cin>>glicose;
    if(glicose<=100){
        cout<<"Classificacao: normal"<<endl;
    }
    else if(glicose>100 && glicose<=140){
        cout<<"Classificacao: elevado"<<endl;
    }
    else{
        cout<<"Classificacao: diabetes"<<endl;
    }
}