#include <iostream>
using namespace std;

void nhapsonguyenduong(long long &n, char k)
{
    cout << "Nhap so nguyen duong " << k << " : ";
    cin >> n;
    while (n < 0)
    {
        cout << "Nhap lai so nguyen " << k << " : ";
        cin >> n;
    }
}

long long ucln(long long a, long long b)
{
    long long r = a;
    if (a < b)
    {
        a = b;
        b = r;
    }
    r = b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
        if (r == 0)
            break;
    }
    return b;
}

int main()
{
    long long a, b;
    nhapsonguyenduong(a, 'a');
    nhapsonguyenduong(b, 'b');
    cout << "UCLN cua a va b la : " << ucln(a, b);
    return 0;
}