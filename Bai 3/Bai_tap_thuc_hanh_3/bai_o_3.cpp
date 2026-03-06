#include <iostream>
using namespace std;

double gt(double x, long long n)
{
    if (n == 0)
        return 1;
    else
        return x * (gt(x, n - 1));
}

int main()
{
    double x, S = 2017;
    long long n;
    cout << "Nhap gia tri x,n cach nhau boi dau cach : ";
    cin >> x >> n;
    for (long long i = 1; i <= n; i++)
    {
        S += gt(x, i);
    }
    cout << "Ket qua : " << S;
    return 0;
}