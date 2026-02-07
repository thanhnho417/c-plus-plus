#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x_1, x_2, y_1, y_2, x_3, y_3;
    cout << "Nhap diem A (x1, y1)\n";
    cout << "x1: ";
    cin >> x_1;
    cout << "y1: ";
    cin >> y_1;
    cout << "Nhap diem B (x2, y2)\n";
    cout << "x2: ";
    cin >> x_2;
    cout << "y2: ";
    cin >> y_2;
    cout << "Nhap diem C (x3, y3)\n";
    cout << "x3: ";
    cin >> x_3;
    cout << "y3: ";
    cin >> y_3;
    float K_x = (x_1 + x_2 + x_3) / 3.0;
    float K_y = (y_1 + y_2 + y_3) / 3.0;
    float inter = sqrt(pow(x_1 - K_x, 2) + pow(y_1 - K_y, 2)) + sqrt(pow(x_2 - K_x, 2) + pow(y_2 - K_y, 2)) + sqrt(pow(x_3 - K_x, 2) + pow(y_3 - K_y, 2));
    cout << "Toa do K (x,y) = (" << K_x << "," << K_y << ")\n";
    cout << "Inter = " << inter;
    return 0;
}