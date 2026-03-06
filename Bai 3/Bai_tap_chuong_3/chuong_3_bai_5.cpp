#include <iostream>
using namespace std;

void nhapsotiendien(long long &dt, long long &ct)
{
    cout << "Nhap so tien dien dau thang (dt), cuoi thang (ct) cach nhau boi dau cach : ";
    cin >> dt >> ct;
    while (dt >= ct || dt <= 0 || ct <= 0)
    {
        cout << "Nhap lai so tien dien dau thang (dt), cuoi thang (ct) : ";
        cin >> dt >> ct;
    }
}

long long tiendien(long long dt, long long ct)
{
    long long tong = ct - dt;
    long long T = 0;
    if (tong - 100 < 0)
        return tong * 1000;
    else
    {
        T += 100 * 1000;
        tong -= 100;
        if (tong - 100 < 0)
            return T + tong * 1700;
        else
        {
            T += 1700 * 100;
            tong -= 100;
            return T + 3500 * tong;
        }
    }
}

int main()
{
    long long dt, ct;
    nhapsotiendien(dt, ct);
    cout << "Tong so tien dien phai tra la : " << tiendien(dt, ct);
    return 0;
}
