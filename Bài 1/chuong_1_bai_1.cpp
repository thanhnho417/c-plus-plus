#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Nhap cac gia tri nguyen cach nhau boi dau cach: ";
    cin >> a >> b >> c >> d;
    int tong = a + b + c + d;
    int tich = a*b*c*d;
    float tbc = tong/4.0;
    cout << "Tong             : " << tong << endl;
    cout << "Tich             : " << tich << endl;
    cout << "Trung binh cong  : " << tbc << endl;
    cout << "Gia tri nho nhat : " << min(min(a,b), min(c,d));
    return 0;
}