#include <iostream>
using namespace std;

void nhapsonguyenduong(long long &n, char k)
{
    cout << "Nhap so nguyen duong " << k << " : ";
    cin >> n;
    while (n <= 1)
    {
        cout << "Nhap lai so nguyen duong " << k << " : ";
        cin >> n;
    }
}

long long fibo(long long n)
{
    if (n <= 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

void indayfibo(long long k)
{
    cout << "Day " << k << " so Fibonanci dau tien la " << endl;
    for (long long i = 1; i <= k; i++)
        cout << fibo(i) << " ";
}
int main()
{
    long long n;
    nhapsonguyenduong(n, 'n');
    indayfibo(n);
    return 0;
}