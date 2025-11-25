#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Quantos casos voce vai digitar? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        double a,b,c,media;
        cout<<"Digite tres numeros: "<<endl;
        cin>>a>>b>>c;
        media=(a*2.0+b*3.0+c*5.0)/10.0;
        cout<<"MEDIA = "<<media<<endl;
    }
}