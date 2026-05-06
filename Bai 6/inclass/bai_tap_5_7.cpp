#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang a: ";
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    ofstream f1("mang_a.txt");
    if (f1.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            f1 << a[i] << " ";
        }
        f1.close();
        cout << "Da ghi mang a vao tep mang_a.txt" << endl;
    }

    int dong, cot;
    cout << "\nNhap so dong n va so cot m cua ma tran b: ";
    cin >> dong >> cot;

    float **b = new float *[dong];
    for (int i = 0; i < dong; i++)
        b[i] = new float[cot];

    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    ofstream f2("ma_tran_b.txt");
    if (f2.is_open())
    {
        f2 << dong << " " << cot << endl;
        for (int i = 0; i < dong; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                f2 << b[i][j] << " ";
            }
            f2 << endl;
        }
        f2.close();
        cout << "Da ghi ma tran b vao tep ma_tran_b.txt" << endl;
    }

    delete[] a;
    for (int i = 0; i < dong; i++)
        delete[] b[i];
    delete[] b;

    return 0;
}