#include <iostream>
using namespace std;

void ktsonguyenduong(long long &n, char k)
{
    cout << "Nhap so nguyen duong " << k << " : ";
    cin >> n;
    while (n && n <= 0)
    {
        cout << "Nhap lai so nguyen duong " << k << " : ";
        cin >> n;
    }
}
long long giaithua(long long n)
{
    long long i = 1, kq = 1;
    while (i <= n)
    {
        kq *= i;
        i += 1;
    }
    return kq;
}

double tohopkn(long long n, long long k)
{
    return (double)giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main()
{
    long long n, k;
    ktsonguyenduong(n, 'n');
    ktsonguyenduong(k, 'k');
    cout << "Ket qua to hop chap k của n la : " << tohopkn(n, k);
    return 0;
}