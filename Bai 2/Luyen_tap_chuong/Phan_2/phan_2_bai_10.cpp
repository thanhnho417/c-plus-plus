#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double F = 0,x; long long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << setprecision(6) << fixed;
    if(n%2==0) cout << "Ket qua : " << (double)(2016*x+sqrt(n*n+10));
    else {
        F+=1+x;
        double mau_so = 1;
        for(long long i=1;i<=n;i++){
            mau_so*=2;
            F+=(double)1/mau_so;
        }
        cout << "Ket qua : " << F;
    }
    return 0;
}