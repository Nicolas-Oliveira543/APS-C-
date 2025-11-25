#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
    int idade1, idade2;
    string nome1, nome2;
    double media;

    cout<<"dados da primeira pessoa"<<endl;
    cout<<"nome: ";
    getline(cin, nome1);
    cout<<"idade: ";
    cin>>idade1;
    
    cout<<"dados da segunda pessoa"<<endl;
    cout<<"nome: ";
    getline(cin, nome2);
    cout<<"idade: ";
    cin>>idade2;
    media = (idade1 + idade2) / 2.0;
    //cout<<fixed<<setprecision(1); (metodo alternativo para adicionar casas decimais)
    cout<<"a idade media de "<<nome1<<" e " <<nome2<<" é de "<<media<<" anos"<<endl;
    return 0;

}