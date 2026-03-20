#include <iostream>
using namespace std;

void nhapgt(long long &n, long long a[])
{
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (long i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuatgt(long long a[], long long n)
{
    for (long i = 0; i < n; i++)
        cout << a[i] << "  ";
}
int main()
{
    long long n, a[10];
    nhapgt(n, a);
    xuatgt(a,n);
    return 0;
}