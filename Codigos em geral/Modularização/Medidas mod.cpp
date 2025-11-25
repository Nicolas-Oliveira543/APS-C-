#include <iostream>
using namespace std;
int quadrado(int x){
    return x*x;
}
int trapezio(int x, int y, int h){
    return ((x+y)*h)/2;
}
int triangulo(int b, int h){
    return (b*h)/2;
}
int main(){
    int lado, base, altura, base_maior, base_menor;
    cout << "Digite o lado do quadrado: "<<endl;
    cin >> lado;
    cout << "Area do quadrado: " << quadrado(lado) << endl;

    cout << "Digite a base maior, base menor e altura do trapezio: "<<endl;
    cin >> base_maior >> base_menor >> altura;
    cout << "Area do trapezio: " << trapezio(base_maior, base_menor, altura) << endl;

    cout << "Digite a base e a altura do triangulo: "<<endl;
    cin >> base >> altura;
    cout << "Area do triangulo: " << triangulo(base, altura) << endl;
}