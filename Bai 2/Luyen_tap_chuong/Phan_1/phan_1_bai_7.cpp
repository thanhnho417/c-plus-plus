#include <iostream>
using namespace std;
int main(){
    double S = 0; long n,t=0;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 0; i <= n; i++){
        t = 2*i + 1;
        S += (double)1/t;
    }
    cout << "Ket qua : " << S;
    return 0;
}