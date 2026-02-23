#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long n; double S = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << setprecision(6);
    for (long long i=1;i<=n;i++)S+=(double)1/i;
    cout << "Ket qua : " << S;
    return 0;
}