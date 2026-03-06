#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void nhapsothuc(double &x, double &e)
{
    cout << "Nhap so thuc x,e cach nhau boi dau cach : ";
    cin >> x >> e;
    while (e > 0.001)
    {
        cout << "Nhap lai so thuc e : ";
        cin >> e;
    }
}

long long giaithua(long long k)
{
    long long i = 1, kq = 1;
    while (i <= k)
    {
        kq *= i;
        i += 1;
    }
    return kq;
}

double somu(double x, long long n)
{
    double kq = 1;
    for (long long i = 1; i <= n; i++)
        kq *= x;
    return kq;
}

double emux(double x, double e)
{
    double kq = 1, tuso = 1, mauso = 1, i = 1, T = 0;
    while (true)
    {
        tuso *= x;
        mauso *= i;
        T = (double)tuso / mauso;
        if (abs(T) < e)
            break;
        else
        {
            kq += T;
            i += 1;
        }
    }
    return kq;
}

int main()
{
    double x, e;
    nhapsothuc(x, e);
    cout << setprecision(6) << fixed;
    cout << "Ket qua e mu x voi sai so e = " << e << " la : " << emux(x, e);
    return 0;
}