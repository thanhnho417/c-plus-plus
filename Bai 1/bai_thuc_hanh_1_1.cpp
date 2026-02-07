#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong;
    float dong_du;
    cout << "Tong    : " << tong << "\n";
    cout << "Hieu    : " << hieu << "\n";
    cout << "Tich    : " << tich << "\n";
    if (b == 0)
    {
        cout << "Do b = 0 nen khong co thuong va du";
        return 1;
    }
    else
    {
        thuong = (float)a / b;
        dong_du = a % b;
        cout << "Thuong  : " << thuong << "\n";
        cout << "Dong du : " << dong_du;
    }

    return 0;
}
