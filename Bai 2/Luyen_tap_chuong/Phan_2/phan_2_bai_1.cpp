#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long n;
    double S = 1, m = 1;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if (n % 2 != 0)
        cout << "Ket qua : " << (double)sqrt(n * n + 1);
    else
    {
        for (long i = 1; i <= n; i++)
        {
            m *= 2;
            S += (double)1 / m;
        }
        cout << "Ket qua : " << S;
    }
    return 0;
}