#include <iostream>
#include <iomanip>
using namespace std;

long long giaithua(long long n){
    long long kq = 1;
    for(long long i=1;i<=n;i++) kq*= i;
    return kq;
}
int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << setprecision(6) << fixed;
    double P = (double)(giaithua(n)+1)/giaithua(n+1);
    cout << "Ket qua P = " << P;
    return 0;
}