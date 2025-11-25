#include <iostream>
using namespace std;
int main(){
    int n,X;
    cout<<"Quantos numeros voce vai digitar? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite um numero: "<<endl;
        cin>>X;
        if(X%2==0){
            if(X>=0){
                cout<<"PAR POSITIVO"<<endl;
            }else{
                cout<<"PAR NEGATIVO"<<endl;
            }
        } else{
            if(X>=0){
                cout<<"IMPAR POSITIVO"<<endl;
            }else{
                cout<<"IMPAR NEGATIVO"<<endl;
            }
        }
    }
}