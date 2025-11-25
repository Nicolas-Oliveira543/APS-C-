#include <iostream>
using namespace std;
int main(){
    int X,Y, soma=0;
    cout<<"Digite dois numeros: "<<endl;
    cin>>X>>Y;
    if(X>Y){
        for(int i=Y+1; i<X; i++){
            if(i%2!=0){
                soma+=i;
            }
        }
    }else{
        for(int i=X+1; i<Y; i++){
            if(i%2!=0){
                soma+=i;
            }
        }
    }
    cout<<"SOMA DOS IMPARES = "<<soma<<endl;
}