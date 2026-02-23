#include <iostream>
using namespace std;

int main(){
    double S = 1, n;
    cout << "Nhap so nguyen n >= 0 : ";
    cin >> n;
    for (long i = 1; i <= n; i++) S*= i;
    cout << "Ket qua : " << S;
    return 0;
}