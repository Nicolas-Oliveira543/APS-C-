#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"quantas linhas vão ter cada matriz?";
    cin>>m;
    cout<<"quantas colunas vão ter cada matriz?";
    cin>>n;
    int matrizA[10][10], matrizB[10][10], matrizC[10][10];
    cout<<"Digite os valores da matriz A:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>matrizA[i][j];
        }
    }
   cout<<"Digite os valores da matriz B:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>matrizB[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    cout<<"MATRIZ SOMA:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrizC[i][j]<<" ";
        }
        cout<<endl;
    }
}