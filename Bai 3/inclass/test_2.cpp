#include <iostream>
using namespace std;

void SWAP(int &a, int &b){
    int tg = a;
    a = b;
    b = tg;
}

int main(){
    int a = 3, b= 5;
    SWAP(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}