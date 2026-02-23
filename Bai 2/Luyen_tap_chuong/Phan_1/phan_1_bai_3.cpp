#include <iostream>
using namespace std;

int main(){
    long n, S = 0, t = 0;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 1; i <= n; i++){
        t = i*i;
        S += t;
    }
    cout << "Ket qua : " << S;
    return 0;
}