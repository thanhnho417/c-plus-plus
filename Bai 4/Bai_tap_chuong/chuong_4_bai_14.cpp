#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n;
    do
    {
        cout << "Nhap so nguyen n : ";
        cin >> n;
    } while (n < 5 || n > 20);
    long long ti_so[n][n], bang_diem[n][n];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            long long a, b;
            cout << "Nhap ket qua ti so cua tran dau giua doi " << i + 1 << " va doi " << j + 1 << " cach nhau boi dau cach : ";
            cin >> a >> b;
            ti_so[i][j] = a;
            ti_so[j][i] = b;
            if (a < b)
            {
                bang_diem[i][j] = 0;
                bang_diem[j][i] = 3;
            }
            else if (a > b)
            {
                bang_diem[i][j] = 0;
                bang_diem[j][i] = 3;
            }
            else
            {
                bang_diem[i][j] = bang_diem[j][i] = 1;
            }
        }
    }
    cout << endl
         << "Ket qua ty so : " << endl;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (i == j)
                cout << setw(14) << "/";
            else
                cout << setw(10) << ti_so[i][j] << " - " << ti_so[j][i];
        }
        cout << endl;
    }
    cout << endl
         << "Bang diem : " << endl;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (i == j)
                cout << setw(9) << "/";
            else
                cout << setw(9) << bang_diem[i][j];
        }
        cout << endl;
    }
    return 0;
}