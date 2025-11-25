#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double distancia1, distancia2,distancia3,maior;
    cout << fixed << setprecision(2);
    cout<<"Digite as tres distancias: "<<endl;
    cin>>distancia1>>distancia2>>distancia3;
    maior = distancia1;
    if(distancia2>maior){
        maior = distancia2;
    } if (distancia3>maior){
        maior = distancia3;
    }
    cout<<"MAIOR DISTANCIA = "<<maior<<endl;
}