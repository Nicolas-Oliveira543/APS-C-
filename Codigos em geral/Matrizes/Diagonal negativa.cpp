#include <iostream>
using namespace std;
int main(){
    int n,negativos=0;
    cout<<"qual a order da matriz?";
    cin>>n;

    int matriz[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"elemento ["<<i<<"]["<<j<<"]:"<<endl;
            cin>>matriz[i][j];
            if(matriz[i][j]<0){
                negativos++;
            }
            if (i==j){
                if (i==0 && j==0){cout<<"Diagonal principal:"<<endl;}
                cout<<matriz[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"Quantidade de negativos = "<<negativos<<endl;
}