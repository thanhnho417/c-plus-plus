#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double F = 0,x; long n;
    cout << "Nhap so nguyen x, n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << setprecision(6) << fixed;
    if(n>=2 && n<=20){
        for (long i=1;i<=n;i++){
            long long mau_so = 2*n-i;
            F+= (double)x/mau_so;
        }
        cout << "Ket qua : " << F;
    } else {
        F = pow(x,n)+1;
        cout << "Ket qua : " << F;
    }
    return 0;
}