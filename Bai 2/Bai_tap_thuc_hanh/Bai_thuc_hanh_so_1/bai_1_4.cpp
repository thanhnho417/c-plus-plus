#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x_1,y_1,x_2, y_2;
    cout << "Nhap toa do diem A(x1,y1) cach nhau boi dau cach : ";
    cin >> x_1 >> y_1;
    cout << "Nhap toa do diem B(x2,y2) cach nhau boi dau cach : ";
    cin >> x_2 >> y_2;
    double D = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
    double M = fabs(x_2-x_1)+fabs(y_2-y_1);
    double C = (double)(1 - (x_1*x_2+y_1*y_2)/(sqrt(pow(x_1,2)+pow(y_1,2))*sqrt(pow(x_2,2)+pow(y_2,2))));
    cout << "Khoang cach Euclidean giua A va B : " << D << endl;
    cout << "khoang cach Manhattan giua A va B : " << M << endl;
    cout << "Khoang cach Cosin giua A va B : " << C << endl;
    return 0;
}