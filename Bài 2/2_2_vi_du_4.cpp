#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, k = 0;
    cout << "Nhap so nguyen x: ";
    cin >> x;
    while (x <= 10)
    {
        cout << "Nhap lai x: ";
        cin >> x;
    }
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            k += 1;
        }
    }
    if (k == 1)
    {
        cout << x << " la so nguyen to";
    }
    else
    {
        cout << x << " khong la so nguyen to";
    }

    return 0;
}