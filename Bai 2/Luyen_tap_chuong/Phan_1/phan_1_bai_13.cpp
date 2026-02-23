#include <iostream>
using namespace std;

int main(){
    long n,x, S = 1;
    cout << "Nhap so nguyen x, n cach nhau boi dau cach : ";
    cin >> x >> n;
    for (long i = 1; i <= n; i++) S *= x;
    cout << "Ket qua : " << S;
    return 0;
}