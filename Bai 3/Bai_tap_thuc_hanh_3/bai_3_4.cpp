#include <iostream>
#include <cmath>
using namespace std;

int ptbac2(double a, double b, double c, double &x1, double &x2)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
        return 1;
    else if (delta == 0)
        return 2;
    else
    {
        x1 = (double)(-b+sqrt(delta))/2*a;
        x2 = (double)(-b-sqrt(delta))/2*a;
    }
    return 0;
}
int main()
{
    double a, b, c, x1, x2;
    cout << "Nhap cac gia tri a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    int T = ptbac2(a,b,c,x1,x2);
    if(T == 1) cout << "Phuong trinh vo nghiem" << endl;
    else if(T == 2) cout << "Phuong trinh co nghiem kep x1 = " << x1 << ", x2 = " << x2 << endl;
    else cout << "Phuong trinh co hai nghiem phan biet: x1 = " << x1 << ", x2 = " << x2 << endl;
    return 0;
}