#include <iostream>
using namespace std;
int main(){
    int valor1,valor2;
    cout<<"Digite dois numeros:"<<endl;
    cin>>valor1>>valor2;
    while(valor1!=valor2){
        if(valor1<valor2){
            cout<<"Crescente"<<endl;
        } else{
            cout<<"Decrescente"<<endl;
        }
        cout<<"Digite outros dois numeros:"<<endl;
        cin>>valor1>>valor2;
    }
}