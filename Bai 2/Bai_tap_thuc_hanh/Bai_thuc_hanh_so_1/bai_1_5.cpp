#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x_1,y_1,x_2,y_2,x_3,y_3,x,y;
    cout << "Nhap toa do diem A(x1,y1) cach nhau boi dau cach : ";
    cin >> x_1 >> y_1;
    cout << "Nhap toa do diem B(x2,y2) cach nhau boi dau cach : ";
    cin >> x_2 >> y_2;
    cout << "Nhap toa do diem C(x3,y3) cach nhau boi dau cach : ";
    cin >> x_3 >> y_3;
    x = double((x_1+x_2+x_3)/3.0);
    y = double((y_1+y_2+y_3)/3.0);
    double inter = sqrt(pow(x_1-x,2)+pow(y_1-y,2))+sqrt(pow(x_2-x,2)+(y_2-y,2))+sqrt(pow(x_3-x,2)+pow(y_3-y,2));
    cout << "Toa do cua K(x,y) : (" << x << "," << y << ")\n";
    cout << "Ket qua Inter : " << inter;
    return 0;
}