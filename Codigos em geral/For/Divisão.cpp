#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Quantos casos você vai digitar? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        double a,b;
        cout<<"Entre com o numerador: "<<endl;
        cin>>a;
        cout<<"Entre com o denominador: "<<endl;
        cin>>b;
        if(b==0){
            cout<<"DIVISAO IMPOSSIVEL"<<endl;
        }else{
            double resultado=a/b;
            cout<<"DIVISAO = "<<resultado<<endl;
        }
    }
}