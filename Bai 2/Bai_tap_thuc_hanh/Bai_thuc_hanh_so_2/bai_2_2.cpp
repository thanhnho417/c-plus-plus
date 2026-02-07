#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    float a,b,c,delta;
    cout << "Nhap cac he so a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    cout << a << b << c << endl;
    if(a=0) cout << "Khong phai phuong trinh bac 2";
    else{
        delta = b*b - 4*a*c;
        if (delta < 0) cout << "Phuong trinh vo nghiem\n";
        else if (delta = 0) cout << "Phuong trinh co nghiem kep x1 = x2 = " << (-b/(2.0*a)) << endl;
        else {
            cout << "Phuong trinh co hai nghiem phan biet : \n";
            cout << "x1 = " << (float)(-b+sqrt(delta))/(2.0*a) << endl;
            cout << "x2 = " << (float)(-b-sqrt(delta))/(2.0*a) << endl;
        }
    }
    return 0;
}