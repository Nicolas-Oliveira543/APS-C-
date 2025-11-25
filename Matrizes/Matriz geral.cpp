#include <iostream>
using namespace std;
int main(){
    int n,soma=0;
    cout<<"Qual a ordem da matriz? ";
    cin>>n;
    int matrizP[10][10];
    int matrizQ[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Elemento ["<<i<<","<<j<<"]: ";
            cin>>matrizP[i][j];
            if(matrizP[i][j]>0){
                soma+=matrizP[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"SOMA DOS POSITIVOS: "<<soma<<endl;
    cout<<endl;
    cout<<"Escolha uma linha: ";
    int linha;
    cin>>linha;
    cout<<"LINHA ESCOLHIDA: ";
    for(int j=0;j<n;j++){
        cout<<matrizP[linha][j]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Escolha uma coluna: ";
    int coluna;
    cin>>coluna;
    cout<<"COLUNA ESCOLHIDA: ";
    for(int i=0;i<n;i++){
        cout<<matrizP[i][coluna]<<" ";
    }
    cout<<endl<<endl;
    cout<<"DIAGONAL PRINCIPAL: ";
    for(int i=0;i<n;i++){
        cout<<matrizP[i][i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrizP[i][j]<0){
                matrizQ[i][j]=matrizP[i][j]*matrizP[i][j];
            }
            else{
                matrizQ[i][j]=matrizP[i][j];
            }
        }
    }
    cout<<"MATRIZ ALTERADA: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrizQ[i][j]<<" ";
        }
        cout<<endl;
    }
}