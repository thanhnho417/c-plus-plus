#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void nhapsothuc(double &n, char k)
{
    cout << "Nhap so thuc " << k << " : ";
    cin >> n;
    while (cin.fail())
    {
        cout << "Nhap lai so thuc " << k << " : ";
        cin >> n;
    }
}

void chuvidientichhtron(double n)
{
    double pi = acos(-1);
    cout << setprecision(6) << fixed;
    cout << "Chu vi hinh tron    : " << (double)n * pi << endl;
    cout << "Dien tich hinh tron : " << (double)n * n * pi;
}

int main()
{
    double n;
    nhapsothuc(n, 'n');
    chuvidientichhtron(n);
    return 0;
}