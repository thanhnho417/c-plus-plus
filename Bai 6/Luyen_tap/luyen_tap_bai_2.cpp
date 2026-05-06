#include <iostream>
#include <cmath>
using namespace std;

void nhap_do_dai(double &d, double &r, double &c)
{
    do
    {
        cout << "Nhap chieu dai, chieu rong, chieu cao cach nhau boi dau cach : ";
        cin >> d >> r >> c;
        if (d <= 0 || r <= 0 || c <= 0)
        {
            cout << "Thong tin khong hop le, vui long thu lai!" << endl;
        }
    } while (d <= 0 || r <= 0 || c <= 0);
}

double tinh_the_tich(double d, double r, double c)
{
    return (double)d * r * c;
}

double Q(double x, long long n)
{
    if (n <= 0 || x == 0)
        return 0;
    else
    {
        double tong = 2024 * exp(fabs(x));
        double tu_so = 1.0, mau_so = x;
        for (long long i = 2; i <= n; i++)
        {
            mau_so *= x;
            tong += (double)tu_so / mau_so;
        }
        return tong;
    }
}

int main()
{
    double d,r,c;
    nhap_do_dai(d,r,c);
    cout << "The tich : " << tinh_the_tich(d,r,c) << endl;
    double x; long long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << "Q(x,n) = " << Q(x,n) << endl;
}