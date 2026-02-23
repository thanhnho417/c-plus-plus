#include <iostream>
using namespace std;

int main(){
    long S = 0, x,n,t=1;
    cout << "Nhap so nguyen x, n cach nhau boi dau cach : ";
    cin >> x >> n;
    for (long i = 1; i <= n; i++){
        t*=x;
        S += t;
    }
    cout << "Ket qua : " << S;
    return 0;
}