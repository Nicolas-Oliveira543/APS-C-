#include <iostream>
using namespace std;
int main(){
    int notas[1000], aprovados=0, n,media,nota1,nota2;
    string alunos[1000];
    cout<<"Quantos alunos serao digitados? "<<endl;
    cin>>n;
    for(int i=0;i<n;i+=2){
        cout<<"Digite nome, primeira e segunda nota do"<<i+1<<"o aluno:"<<endl;
        cin>>alunos[i];
        cin>>nota1;
        cin>>nota2;
        media=(nota1+nota2)/2;
        if(media>=60){
            notas[i]=media;
        }
    }
    cout<<"Alunos aprovados:"<<endl;
    for(int i=0;i<n;i++){
        if(notas[i]>=60){
            cout<<alunos[i]<<endl;
        }
    }
}