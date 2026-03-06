#include <iostream>
using namespace std;

long demchuso(long long n)
{
    if (n < 10)
        return 1;
    else
        return 1 + demchuso(n / 10);
}

int main()
{
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if (n < 0)
        n *= -1;
    long dem = demchuso(n);
    cout << "Ket qua : " << dem;
    return 0;
}