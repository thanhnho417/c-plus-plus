#include <iostream>
#include "lib/mylib.h"
using namespace std;

int main(){
    double a,b,c;
    cout << "Nhap cac so thuc a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    cout << "GTLN : " << gtmax(a,b,c) << endl;
    cout << "TBC : " << tbaverage(a,b,c) << endl;
    cout << "Tong : " << tongsum(a,b,c) << endl;
    return 0;
}

