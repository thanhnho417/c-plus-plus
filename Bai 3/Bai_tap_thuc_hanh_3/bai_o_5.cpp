#include <iostream>
using namespace std;

long long dayc(long long n)
{
    long long S = 0;
    if (n == 1 || n == 2)
        return 1;
    else
    {
        for (long long i = 1; i < n; i++)
        {
            S += dayc(i) * dayc(n - i);
        }
    }
    return S;
}

int main()
{
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    long long C = dayc(n);
    cout << "Ket qua : " << C;
    return 0;
}