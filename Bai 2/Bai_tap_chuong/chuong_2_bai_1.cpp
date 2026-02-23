#include <iostream>
using namespace std;

int main()
{
    long long m, n;
    cout << "Nhap hai so nguyen m, n cach nhau boi dau cach : ";
    cin >> m >> n;
    if (n % m == 0)
        cout << "m la uoc cua n";
    else
        cout << "m khong la uoc cua n";
    return 0;
}