#include <iostream>
using namespace std;
int main(){
    int a,b,c,menor;
    cout<<"Primeiro valor: "<<endl;
    cin>>a;
    cout<<"Segundo valor: "<<endl;
    cin>>b;
    cout<<"Terceiro valor: "<<endl;
    cin>>c;
    if(a>b && a>c){
        if(b>c){
            menor=c;
        }else{
            menor=b;
        }
    }else if(b>a && b>c){
        if(a>c){
            menor=c;
        }else{
            menor=a;
        }
}