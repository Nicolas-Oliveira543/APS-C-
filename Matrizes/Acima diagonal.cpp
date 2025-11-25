#include <iostream>
using namespace std;
int main(){
    int n,soma=0;
    cout<<"Qual a ordem da matriz? "<<endl;
    cin>>n;
    int matriz[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Elemento ["<<i<<","<<j<<"]: ";
            cin>>matriz[i][j];
            if(j>i){
                soma+=matriz[i][j];
            }
        }
    }
    cout<<"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = "<<soma<<endl;
}