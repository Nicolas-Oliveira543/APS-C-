#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float raio, area;
    const float pi = 3.14159;

    cout<< "Digite o vlor do raio do círculo: ";
    cin >> raio;
    
    area = pi * pow(raio, 2);

    cout<< fixed << setprecision(3);
    cout<<"area = "<<area;
    
    return 0;
}