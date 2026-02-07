#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,delta;
    cout << "Nhap cac so a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    if (a == 0) cout << "Khong phai phuong trình bac 2";
    else {
        delta = b*b - 4*a*c;
        cout << delta << endl;
        if (delta < 0) cout << "Phuong trinh vo nghiem";
        else if (delta == 0) cout << "Phuong trình co nghiem kep x1 = x2 = " << -(b/(2.0*a));
        else {
            cout << "Phuong trinh co hai nghiem phan biet: \n";
            cout << "x1 = " << (-b+sqrt(delta))/(2.0*a) << endl;
            cout << "x2 = " << (-b-sqrt(delta))/(2.0*a);
        }
    }
    return 0;
}