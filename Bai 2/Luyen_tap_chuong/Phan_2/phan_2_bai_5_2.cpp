#include <iostream>
using namespace std;

int main()
{
    long long S = 0, n;
    double x;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    if (x < 0)
    {
        for (long i = 1; i <= n; i++)
        {
            long long T = (x + i) * (x + i);
            S += T;
        }
    }
    else
    {
        S += x;
        for (long i = 1; i <= n; i++)
            S += i;
    }
    cout << "Ket qua : " << S;
    return 0;
}