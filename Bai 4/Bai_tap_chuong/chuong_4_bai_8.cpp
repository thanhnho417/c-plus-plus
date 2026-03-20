#include <iostream>
using namespace std;

bool ktsont(long long n)
{
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    else
    {
        long long i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
            else
                i++;
        }
    }
    return true;
}

int main()
{
    long long n;
    do
    {
        cout << "Nhap so nguyen n (1 <= n <= 30) : ";
        cin >> n;
    } while (n < 1 || n > 30);
    long long a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    long long dem = 0;
    long long tongnt = 0;
    dem = 0;
    cout << endl
         << "Cac phan tu cua mang la so nguyen to : ";
    for (long long i = 0; i < n; i++)
    {
        if (ktsont(a[i]))
        {
            cout << a[i] << "  ";
            tongnt += a[i];
            dem++;
        }
    }
    cout << endl;
    cout << "So phan tu : " << dem << endl;
    cout << "Tong : " << tongnt;
    return 0;
}