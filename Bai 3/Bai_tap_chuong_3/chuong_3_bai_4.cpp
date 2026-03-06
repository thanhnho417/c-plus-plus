#include <iostream>
using namespace std;

void nhapsonguyenduong(long long &n, char k)
{
    cout << "Nhap so nguyen duong " << k << " : ";
    cin >> n;
    while (n < 0)
    {
        cout << "Nhap lai so nguyen n : ";
        cin >> n;
    }
}

long long sochuso(long long n)
{
    long long dem = 0, T = n;
    while (T != 0)
    {
        T = (T - T % 10) / 10;
        dem += 1;
    }
    return dem;
}

int main()
{
    long long n;
    nhapsonguyenduong(n, 'n');
    cout << "Số " << n << " co " << sochuso(n) << " chu so";
    return 0;
}