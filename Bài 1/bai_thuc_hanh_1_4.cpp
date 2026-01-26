#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x_mot, x_hai, y_mot, y_hai;
    cout << "Nhap diem A (x1, x2)\n";
    cout << "x1: ";
    cin >> x_mot;
    cout << "y1: ";
    cin >> y_mot;
    cout << "Nhap diem B (x2, y2)\n";
    cout << "x2: ";
    cin >> x_hai;
    cout << "y2: ";
    cin >> y_hai;
    float D = sqrt(pow(x_hai - x_mot, 2) + pow(y_hai - y_mot, 2));
    float M = fabs(x_hai - x_mot) + fabs(y_hai - y_mot);
    float C = 1 - (x_mot * x_hai + y_mot * y_hai) / (sqrt(pow(x_mot, 2) + pow(y_mot, 2)) * sqrt(pow(x_hai, 2) + pow(y_hai, 2)));
    cout << "Khoang cach Euclidean giua A va B: " << D << endl;
    cout << "Khoang cach manhattan giua A va B: " << M << endl;
    cout << "Khoang cach cosin giua A va B    : " << C << endl;
    return 0;
}