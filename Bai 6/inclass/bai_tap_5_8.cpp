#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    string fileName = "matrix.txt";
    cout << "Nhap so dong n va so cot m: ";
    cin >> n >> m;

    float **b = new float *[n];
    for (int i = 0; i < n; i++)
        b[i] = new float[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    ofstream f_out(fileName);
    if (f_out.is_open())
    {
        f_out << n << " " << m << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                f_out << b[i][j] << " ";
            }
            f_out << endl;
        }
        f_out.close();
        cout << "\n=> Da ghi du lieu vao tep." << endl;
    }
    cout << "\n--- Noi dung tep theo dung dinh dang ---" << endl;
    ifstream f_in1(fileName);
    string line;
    if (f_in1.is_open())
    {
        while (getline(f_in1, line))
        {
            cout << line << endl;
        }
        f_in1.close();
    }
    int p, q;
    ifstream f_in2(fileName);
    if (f_in2.is_open())
    {
        f_in2 >> p >> q;
        float **a = new float *[p];
        for (int i = 0; i < p; i++)
            a[i] = new float[q];
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                f_in2 >> a[i][j];
            }
        }
        f_in2.close();
        cout << "\n--- Ma tran a sau khi doc tu bien p, q ---" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < p; i++)
            delete[] a[i];
        delete[] a;
    }
    for (int i = 0; i < n; i++)
        delete[] b[i];
    delete[] b;

    return 0;
}