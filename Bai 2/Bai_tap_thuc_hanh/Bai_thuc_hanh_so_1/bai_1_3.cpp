#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x;
    cout << "Nhap so thuc x : ";
    cin >> x;
    double F = (x*x+exp(fabs(x))+pow(sin(x), 2))/pow(x*x+1,(double)1.0/5.0);
    cout << "Ket qua : " << F;
    return 0;
}