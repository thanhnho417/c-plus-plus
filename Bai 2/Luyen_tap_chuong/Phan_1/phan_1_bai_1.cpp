#include <iostream>
using namespace std;
int main(){
    long n, S = 0, t = 0;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 2; i <= n+2; i += 2){
        S += i;
    }
    cout << "Ket qua : " << S;
    return 0;
}