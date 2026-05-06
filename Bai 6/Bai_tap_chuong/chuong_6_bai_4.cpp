#include <iostream>
#include <cmath>
using namespace std;

int min_day_so(double *a, int n)
{
    int so = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > so)
            so = *(a + i);
    }
    for (int i = 0; i < n; i++)
    {
        if ((*(a + i) > 0) && (*(a + i) < so))
            so = *(a + i);
    }
    return so;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen n : ";
        cin >> n;
    } while (n <= 1 || n >= 20);
    double *a = new double[n];
    cout << "Nhap lan luot " << n << " phan tu cach nhau boi dau cach : ";
    for (int i = 0; i < n; i++)
        cin >> *(a + i);
    double so_duong_min = min_day_so(a, n);
    cout << "Cac so co gia tri tuyet doi lon hon so duong nho nhat cua day va vi tri cua chung : " << endl;
    for (int i = 0; i < n; i++)
    {
        if ((*(a + i) < 0) && (abs(*(a + i)) > so_duong_min))
        {
            cout << *(a + i) << ", vi tri thu : " << i + 1 << endl;
        }
    }
    int k;
    cout << "Nhap so nguyen k : ";
    cin >> k;
    if (k >= 0 && k < n)
    {
        for (int i = k - 1; i < n - 1; i++)
        {
            *(a + i) = *(a + i + 1);
        }
        n--;
        cout << "Day sau khi xoa : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(a + i) << " ";
        }
        cout << endl;
    }
    else if (k == n)
    {
        n--;
        cout << "Day sau khi xoa : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(a + i) << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Vi tri khong nam trong day" << endl;
    }
    for(int i=1;i<n;i++){
        double temp = *(a+i); int j = i-1;
        while (j>=0 && *(a+j) < temp){
            *(a+j+1) = *(a+j);
            j--;
        }
        *(a+j+1) = temp;
    }
    cout << "Day so sau khi sap xep giam dan : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    cout << endl;
    delete[] a;
}