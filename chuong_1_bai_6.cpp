#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x_1, y_1, x_2, y_2, x_3, y_3;
    cout << "Nhap toa do diem A (x1, y1)\n"; 
    cout << "x1: ";
    cin >> x_1;
    cout << "y1: ";
    cin >> y_1;
    cout << "Nhap toa do diem B (x2, y2)\n";
    cout << "x2: ";
    cin >> x_2;
    cout << "y2: ";
    cin >> y_2;
    cout << "Nhap toa do diem C (x3, y3)\n";
    cout << "x3: ";
    cin >> x_3;
    cout << "y3: ";
    cin >> y_3;
    float A_B = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    float B_C =  sqrt(pow(x_3 - x_2, 2) + pow(y_3 - y_2, 2));
    float C_A =  sqrt(pow(x_3 - x_1, 2) + pow(y_3 - y_1, 2));
    float chu_vi = A_B + B_C + C_A;
    float p = (A_B + B_C + C_A)/2.0;
    float dien_tich = sqrt(p*(p - A_B)*(p - B_C)*(p - C_A));
    cout << "Do dai canh AB         : " << A_B << endl;
    cout << "Do dai canh BC         : " << B_C << endl;
    cout << "Do dai canh CA         : " << C_A << endl;
    cout << "Chu vi tam giac ABC    : " << chu_vi << endl;
    cout << "Dien tich tam giac ABC : " << dien_tich;
    return 0;
}