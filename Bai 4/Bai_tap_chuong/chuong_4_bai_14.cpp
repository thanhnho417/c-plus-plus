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
    long long ti_so[n][n] = {0}, bang_diem[n] = {0}, hieu_so[n] = {0};
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
                bang_diem[j] += 3;
            }
            else if (a > b)
            {
                bang_diem[i] += 3;
            }
            else
            {
                bang_diem[i] = bang_diem[j] = 1;
            }
            hieu_so[i] += a - b;
            hieu_so[j] += b - a;
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
    long long doi_bong = 0;
    for (long long i = 1; i < n; i++)
    {
        if (bang_diem[i] > bang_diem[doi_bong])
            doi_bong = i;
        else if (bang_diem[i] == bang_diem[doi_bong])
        {
            if (hieu_so[i] > hieu_so[doi_bong])
                doi_bong = i;
        }
    }
    cout << endl
         << "Diem so tung doi : " << endl;
    for (long long i = 0; i < n; i++)
    {
        cout << "Doi " << i + 1 << " : " << bang_diem[i] << endl;
    }
    cout << endl
         << "Doi vo dich trong giai dau : Doi " << doi_bong + 1;
    return 0;
}