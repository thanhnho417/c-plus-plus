#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n, S = 0, tong_dem = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (long i = 2; i <= n; i++)
    {
        if (i == 2)
        {
            S += i;
            tong_dem += 1;
        }
        else
        {
            int dem = 0;
            for (long j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    dem += 1;
                }
            }
            if (dem != 1)
            {
                tong_dem += 1;
                S += i;
            }
        }
    }
    cout << "Ket qua : " << S << endl;
    cout << "So luong : " << tong_dem;
    return 0;
}