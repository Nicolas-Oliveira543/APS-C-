#include <iostream>
using namespace std;
int main(){
    int senha;
    cin>>senha;
    for (int cont = 0; cont < 3;cont++ ){
        if (senha==2002){
            cout<<"Acesso permitido"<<endl;
            break;
        }
        cout<<"Senha Invalida"<<endl;
        cin>>senha;
    }
}