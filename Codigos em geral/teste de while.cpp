#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n1,soma=0;

    cout<<"digite o 1 numero: ";
    cin>>n1;

    while (n1 != 0)
    {
        soma+=n1;
        cout<<"digite outro numero: ";
        cin>>n1;
    }
    cout<<"soma: "<<soma;
}