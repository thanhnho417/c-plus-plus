#include <iostream>
using namespace std;

void nhapsoham(long long &n, double a[])
{
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}

long long mangmax(double a[], long long n)
{
    double kq = a[0];
    for (long long i = 0; i < n; i++)
    {
        if (a[i] > kq)
        {
            kq = a[i];
        }
    }
}

int main()
{
    long long n;
    double a[100];
    nhapsoham(n, a);
    double kq = mangmax(a,n);
    long dem = 0;
    
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] == kq)
            dem++;
    }
    cout << "Gia tri lon nhat trong mang a : " << kq << endl;
    cout << "So gia tri lon nhat : " << dem;
    return 0;
}