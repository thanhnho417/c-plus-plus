#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, tong = 0, dem = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tong++;
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            dem++;
        }
        else
        {
            int k = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    k++;
                }
            }
            if (k == 0)
            {
                dem++;
            }
        }
    }
    cout << "Tong : " << tong << endl;
    cout << "So so nguyen to: " << dem;
    return 0;
}