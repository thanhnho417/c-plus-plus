#include <iostream>
using namespace std;

int main(){
    double S = 0; long n;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 1; i <= n; i++){
        S += (double)i/(i+1);
    }
    cout << "Ket qua : " << S;
    return 0;
}