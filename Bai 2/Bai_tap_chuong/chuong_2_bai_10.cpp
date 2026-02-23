#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long long n;
    double S = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << setprecision(6);
    if (n % 2 != 0)
        cout << "Ket qua : " << (double)sqrt(n * n + 1);
    else
    {
        S+=1;
        long long mau_so = 1;
        for (long long i = 1; i <= n; i++)
        {
            mau_so*=2;
            S += (double)1/mau_so;
        }
        cout << "Ket qua : " << S;
    }
    return 0;
}