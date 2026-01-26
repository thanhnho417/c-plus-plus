#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a;
    cout << "Nhap do dai canh hinh lap phuong: ";
    cin >> a;
    float sxq = 4*pow(a,2);
    float the_tich = pow(a,3);
    float duong_cheo = a*sqrt(3);
    cout << "Dien tich xung quanh : " << sxq << endl;
    cout << "The tich             : " << the_tich << endl;
    cout << "Duong cheo           : " << duong_cheo;
    return 0;
}