#include <iostream>
#include "library_for_nothing.h"
using namespace std;

int main(){
    double a,b,c;
    cout << "Nhap cac gia tri a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    double m = gtmax(a,b,c);
    double avg = tbaverage(a,b,c);
    double t = tongsum(a,b,c);
    cout << "GTLN : " << m << endl;
    cout << "Trung binh ba so : " << avg << endl;
    cout << "Tong ba so : " << t << endl;
    return 0;
}