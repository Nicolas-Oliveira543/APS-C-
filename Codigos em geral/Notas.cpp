#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed<<setprecision(1);
    double nota1,nota2,media;
    cout<<"Digite a primeira nota:"<<endl;
    cin>>nota1;
    cout<<"Digite a segunda nota:"<<endl;
    cin>>nota2;
    media=(nota1+nota2)/2;
    cout<<"NOTA FINAL = "<<media<<endl;
    if(media<60){
        cout<<"REPROVADO"<<endl;
    }
}