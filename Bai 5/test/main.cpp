#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;

void nhap_mang(double *a, int n)
{
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

void sap_xep_mang(double *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        double temp = *(a + i);
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

double tong_so_co_chi_so_chan(double *a, int n)
{
    double tong = 0;
    for (int i = 0; i < n; i += 2)
    {
        tong += *(a + i);
    }
    return tong;
}

void xuat_mang(double *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void max_nhat_nhi(double *a, int n)
{
    if (n<1) return;
    sap_xep_mang(a, n);
    cout << "Phan tu lon thu nhat : " << *(a + n - 1) << endl;
    cout << "Phan tu lon thu hai  : " << *(a + n - 2) << endl;
}

void luu_file(double *a, int n, const char *ten_tep)
{
    ofstream fout(ten_tep, ios::out);
    if (!fout.is_open())
    {
        cout << "Mo file that bai, yeu cau thu lai" << endl;
        return;
    }
    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << setprecision(2) << fixed << *(a + i) << " ";
    fout << endl;
    fout << "end" << endl;
    cout << "File text duoc luu tai : " << ten_tep << endl;
    fout.close();
}

bool ba_so_lien_tiep(double *a, int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (*(a + i) > 0 && *(a + i + 1) > 0 && *(a + i + 2) > 0)
        {
            return true;
        }
    }
    return false;
}

void xoa_phan_tu_lon_hon_5(double *a, int &n)
{
    int i = 0;
    while (i < n)
    {
        if (*(a + i) > 5)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    double *a = new double[n];
    nhap_mang(a, n);
    sap_xep_mang(a, n);
    double tong = tong_so_co_chi_so_chan(a, n);
    cout << "Mang da sap xep : ";
    xuat_mang(a, n);
    cout << "Tong cac phan tu co chi so chan trong mang : " << tong << endl;
    luu_file(a, n, "D:\\text.txt");
    max_nhat_nhi(a, n);
    bool check = ba_so_lien_tiep(a, n);
    if (check)
        cout << "Mang co chua ba so lien tiep deu duong";
    else
        cout << "Mang khong chua ba so lien tiep deu duong";
    cout << endl;
    xoa_phan_tu_lon_hon_5(a, n);
    cout << "Mang sau khi xoa cac phan tu lon hon 5 : ";
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    delete[] a;
}