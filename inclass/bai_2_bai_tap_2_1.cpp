#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b, c, x_1, x_2, delta;
    cout << "Nhap cac gia tri a, b, c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    if (a == 0) cout << "La phuong trinh bac nhat";
    delta = b*b - 4*a*c;
    if (delta < 0) cout << "Phuong trinh vo nghiem";
    else if (delta == 0) cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a);
    else {
        cout << "Phuong trinh co hai nghiem phan biet\n";
        cout << "x1 = " << (-b+sqrt(delta))/(2*a) << endl;
        cout << "x2 = " << (-b-sqrt(delta))/(2*a) << endl;
    }
    return 0;
}