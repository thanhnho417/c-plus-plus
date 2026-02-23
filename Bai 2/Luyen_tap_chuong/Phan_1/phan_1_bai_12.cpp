#include <iostream>
using namespace std;

int main(){
    long S = 0, n, t = 1;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 1; i <= n; i++){
        t *= i;
        S += t;
    }
    cout << "Ket qua : " << S;
    return 0;
}