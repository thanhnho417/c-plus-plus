#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double F = 0, x;
    long long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << setprecision(6) << fixed;
    if (n > 1)
    {
        F += 1;
        for (long long i = 1; i <= n; i++)
        {
            double tu_so = x - i, mau_so = n + i;
            F += (double)tu_so / mau_so;
        }
        cout << "Ket qua : " << F;
    }
    else
    {
        F = sqrt(n) + 2016 * x;
        cout << "Ket qua : " << F;
    }
    return 0;
}