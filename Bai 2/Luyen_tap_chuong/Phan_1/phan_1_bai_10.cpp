#include <iostream>
using namespace std;

int main(){
    double S = 0; long n;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 0; i <= n; i++){
        S += (double)(2*i+1)/(2*i+2);
    }
    cout << "Ket qua : " << S;
    return 0;
}