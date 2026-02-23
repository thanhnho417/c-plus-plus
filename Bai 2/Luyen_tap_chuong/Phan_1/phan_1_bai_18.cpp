#include <iostream>
using namespace std;

int main(){
    double S = 0; long x,n,t=1, m=0;
    cout << "Nhap so nguyen x, n cach nhau boi dau cach : ";
    cin >> x >> n;
    for (long i=1; i <=n; i++){
        m += i;
        t*= x;
        S += (double)t/m;
    }
    cout << "Ket qua : " << S;
    return 0;
}