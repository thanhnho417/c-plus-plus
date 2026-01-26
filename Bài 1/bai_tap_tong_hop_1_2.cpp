#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x;
    int n;
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    float kq = 2020*exp(fabs(x))*sqrt(pow(x,2)+1)+pow(x,1.0/5.0)+n;
    cout << "Ket qua : " << kq;
    return 0;
}