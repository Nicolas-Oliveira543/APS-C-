#include <iostream>
using namespace std;
int main() {
    int X,soma;
    while(cin>>X){
        if(X==0)break;
        if(X%2==0){
            int x1,x2,x3,x4;
            x1=X + 2;
            x2=X + 4;
            x3=X + 6;
            x4=X + 8;
            soma=X+x1+x2+x3+x4;
            cout<<soma<<endl;
        } else {
            int y1,y2,y3,y4,y5;
            y1=X + 1;
            y2=X + 3;
            y3=X + 5;
            y4=X + 7;
            y5=X + 9;
            soma=y1+y2+y3+y4+y5;
            cout<<soma<<endl;
        }
    }
    return 0;
}