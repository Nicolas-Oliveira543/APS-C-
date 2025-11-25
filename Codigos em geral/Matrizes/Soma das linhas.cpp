#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Qual é o número de linhas da matriz?";
    cin>>m;
    cout<<"Qual é o número de colunas da matriz?";
    cin>>n;
    int matriz[11][11];
    int vetor[11];
    for(int i=1;i<=m;i++){
        int soma=0;
        cout<<"Digite os valores da "<<i<<"a. linha:"<<endl;
        for(int j=1;j<=n;j++){
            cin>>matriz[i][j];
            soma += matriz[i][j];
        }
        vetor[i]=soma;
    }
    cout<<"Vetor gerado:"<<endl;
    for(int i=1;i<=m;i++){
        cout<<vetor[i]<<endl;
    }
}