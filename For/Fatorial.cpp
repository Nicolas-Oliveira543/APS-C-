#include <iostream>
using namespace std;
int main(){
    int n,fatorial;
    cout<<"Digite o valor de N:"<<endl;
    cin>>n;
    fatorial=n;
    if(n==0){
        fatorial=1;
    }
    for(int i=0;i<n;i++){
        fatorial=fatorial*i;
    }
    cout<<"FATORIAL = "<<fatorial<<endl;
}