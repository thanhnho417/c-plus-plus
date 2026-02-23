#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double S = 0, x;
    long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    if (n > 1 && x != 0)
    {
        S += 2018;
        for (long i = 1; i <= n; i++)
            S += (double)i / x;
        cout << "Ket qua : " << S;
    }
    else
        cout << "Ket qua : " << fabs(n) + x * x * x;
    return 0;
}