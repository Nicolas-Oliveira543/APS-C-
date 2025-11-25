#include <iostream>
using namespace std;
int main(){
    int n,X,dentro=0,fora=0;
    cout<<"Quantos valores voce vai digitar? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite um numero: ";
        cin>>X;
        if(X>=10 && X<=20){
            dentro++;
        }else{
            fora++;
        }
    }
}