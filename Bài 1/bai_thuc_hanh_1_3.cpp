#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;
    double ket_qua = (x * x + exp(fabs(x)) + sin(x) * sin(x)) / pow(x * x + 1, 1.0 / 5.0);
    cout << "Ket qua (Theo rad): " << ket_qua;
    return 0;
}