#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    cout << "Nhap hai so thuc a,b cach nhau boi dau cach : ";
    cin >> a >> b;
    cout << setprecision(6);
    if (a==0) cout << "Khong phai phuong trinh bac nhat";
    else cout << "Nghiem cua phuong trinh : " << (double)-b/a;
    return 0;
}