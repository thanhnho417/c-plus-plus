#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, P; // gán số thực
    int n;

    cout << "nhap so nguyen n : ";
    cin >> n;
    cout << "Nhap so thuc x : ";
    cin >> x;

    P = (double) 2020 * exp(fabs(x)) * sqrt(pow(x, 2) + 1) + pow(x, 1.0 / 5.0) + n;

    cout << "Ket qua : " << P;
    return 0;
}