#include <iostream>
using namespace std;

int main(){
    long n, S = 0, t = -1;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 1; i <= n; i++){
        t *= -1;
        S += i*i*t; 
    }
    cout << "Ket qua : " << S;
    return 0;
}