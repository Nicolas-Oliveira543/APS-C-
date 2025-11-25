#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 double A, B, C, MEDIA;
 cin >> A;
 cin >> B;
 cin >> C;
 MEDIA = (A+B+C)/3;
 cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
}