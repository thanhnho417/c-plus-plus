#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double F = 0, x; long long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << setprecision(6) << fixed;
    if (n%2!=0) cout << "Ket qua : " << (double)fabs(x+n);
    else {
        double tu_so = 1,mau_so=1;
        F+=5;
        for(long long i=1;i<=n;i++){
            tu_so *= x;
            mau_so *= 2;
            F+= (double)tu_so/mau_so;
        }
        cout << "Ket qua : " << F;
    }
    return 0;
}