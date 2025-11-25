#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    cout<<fixed<<setprecision(4);
    double a,b,c,delta,x1,x2;
    cout<<"Coeficiente a: "<<endl;
    cin>>a;
    cout<<"Coeficiente b: "<<endl;
    cin>>b;
    cout<<"Coeficiente c: "<<endl;
    cin>>c;
    delta=b*b-4*a*c;
    if(delta<0){
        cout<<"Nao existem raizes reais"<<endl;
    }else{
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"X1 = "<<x1<<endl;
        cout<<"X2 = "<<x2<<endl;
    }
}