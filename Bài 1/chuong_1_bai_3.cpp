#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x_1, y_1, x_2, y_2;
    cout << "Nhap diem A (x1,y1)\n";
    cout << "x1: ";
    cin >> x_1;
    cout << "y1: ";
    cin >> y_1;
    cout << "Nhap diem B (x2, y2)\n";
    cout << "x2: ";
    cin >> x_2;
    cout << "y2: ";
    cin >> y_2;
    float k_c = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    cout << "Khoang cach: " << k_c;
    return 0;
}