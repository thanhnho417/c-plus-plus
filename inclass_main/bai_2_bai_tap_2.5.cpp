#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n =2;
    while (pow(2,n) <= 10000) {n *= 2;}
    cout << "Ket qua : " << n;
    return 0;
}