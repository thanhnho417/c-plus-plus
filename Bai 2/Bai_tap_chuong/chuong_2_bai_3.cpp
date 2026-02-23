#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c;
    cout << "Nhap cac he so a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    cout << setprecision(6);
    if(a==0) cout << "Khong phai phuong trinh bac hai";
    else {
        double delta = b*b-4*a*c;
        if (delta < 0) cout << "Phuong trinh vo nghiem";
        else if (delta == 0){
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << (double)-b/(2*a);
        } else {
            cout << "Phuong trinh co hai nghiem phan biet : \n";
            cout << "x1 = " << (double)(-b+sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (double)(-b-sqrt(delta))/(2*a);
        }
    }
    return 0;
}