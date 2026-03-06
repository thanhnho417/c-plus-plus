#include <iostream>
using namespace std;

double dequy(double x, long long n)
{
    if (n == 0)
        return 1;
    else
        return (double)dequy(x, n - 1) * (x / n);
}

int main()
{
    double x;
    long long n;
    cout << "Nhap so thuc x, so nguyen duong n cach nhau boi dau cach : ";
    cin >> x >> n;
    double S = dequy(x, n);
    cout << "Ket qua : " << S;
    return 0;
}