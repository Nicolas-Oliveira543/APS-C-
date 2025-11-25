#include <iostream>
using namespace std;
int vetor[10];
int ler_vetor(int a){
    for(int i=0;i<10;i++){
        a=vetor[i];
    cout<<a<<endl;
    }
    return 0;
}
int media(int a) {
    for (int i = 0; i < 10; i++) {
        a += vetor[i];
    }
    return a / 10;
}
int maior(int a, int b){
    int maior;
    if(a>b){
        maior = a;
    } else{
        maior = b;
    }
    for(int i=0;i<9;i++){
        a=vetor[i];
        b=vetor[i+1];
    if(a>maior){
        maior = a;
    } else if(b>maior){
        maior = b;
    }
} return maior;
}
int menor(int a, int b){
    int menor;
    if(a<b){
        menor = a;
    } else{
        menor = b;
    }
    for(int i=0;i<9;i++){
        a=vetor[i];
        b=vetor[i+1];
    if(a<menor){
        menor = a;
    } else if(b<menor){
        menor = b;
    }
    } return menor;
}
int pares(int a){
    int pares=0;
    for(int i=0;i<10;i++){
        a=vetor[i];
    if(a%2==0){
        pares++;
    }
}   return pares;
}
int main(){
    int n,comando,q;
    cout<<"Digite 10 números inteiros:"<<endl;
    for(int i=0;i<10;i++){
        cin>>vetor[i];
    }
    while(comando!=5){
    cout<<"Escolha uma opcao:"<<endl;
    cout<<"1 - Ler vetor"<<endl;
    cout<<"2 - Calcular media"<<endl;
    cout<<"3 - Encontrar maior e menor numero"<<endl;
    cout<<"4 - Contar numeros pares"<<endl;
    cout<<"5 - Sair"<<endl;
    cin>>comando;
    if(comando==1){
        cout<<"Valores do vetor: "<<endl;
        cout<<ler_vetor(q)<<endl;
    }
    if(comando==2){
        cout << "Media: " << media(n) << endl;
    }
    if (comando==3){
        cout<<"Maior: "<<maior(n,q)<<endl;
        cout<<"Menor: "<<menor(n,q)<<endl;
    }
    if(comando==4){
        cout<<"Quantidade de numeros pares: "<<pares(n)<<endl;
    }
    if(comando==5){
        cout<<"Encerrando o programa."<<endl;
    }
}
}