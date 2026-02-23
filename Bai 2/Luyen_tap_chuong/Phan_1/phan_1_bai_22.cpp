#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double S = 0; long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for(long i=1;i<=n;i++) S = (double)sqrt(2 + S);
    cout << "Ket qua : " << S;
    return 0;
}