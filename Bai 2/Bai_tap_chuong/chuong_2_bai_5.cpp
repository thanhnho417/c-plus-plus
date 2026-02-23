#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double d,k; char c;
    cout << "Nhap diem so : ";
    cin >> k;
    d = round(k*10)/10;
    if (d>=8.5){
        c = 'A';
        cout << "Diem chu : " << c;
    } else if (d >= 7.0 && d < 8.5){
        c = 'B';
        cout << "Diem chu : " << c;
    }else if (d >= 5.0 && d < 7){
        c = 'C';
        cout << "Diem chu : " << c;
    }else if (d >= 4.0 && d < 5){
        c = 'D';
        cout << "Diem chu : " << c;
    } else {
        c = 'F';
        cout << "Diem chu : F";
    }
    return 0;
}