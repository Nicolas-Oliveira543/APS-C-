#include <iostream>
using namespace std;
int main(){
    int X;
    cout<<"Digite o valor de X: "<<endl;
    cin>>X;
    if(X%2!=0){
    for(int i=1; i<=X;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}else{
    for(int i=1; i<X;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
}