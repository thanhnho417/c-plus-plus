#include <iostream>
using namespace std;

int main(){
    long tong, hieu, tich; double thuong; long dong_du;
    int a,b;
    cout << "Nhap hai so nguyen a, b cach nhau boi dau cach : ";
    cin >> a >> b;
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = (double)a/b;
    dong_du = a % b;
    cout << "Tong : " << tong << endl;
    cout << "Hieu : " << hieu << endl;
    cout << "Tich : " << tich << endl;
    cout << "Thuong : " << thuong << endl;
    cout << "Dong du : " << dong_du << endl;
    return 0;
}