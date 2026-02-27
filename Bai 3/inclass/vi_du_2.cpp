#include <iostream>
#include <cmath>
using namespace std;

float euclidean(long x_1, long x_2, long y_1, long y_2){
    float kq = (double) sqrt((x_1 - x_2)*(x_1 - x_2)) + sqrt((y_1 - y_2)*(y_1 - y_2));
    return kq;
}

int main(){
    long x_1,x_2,y_1,y_2;
    cout << "Nhap diem A(x1,y1) cach nhau boi dau cach : ";
    cin >> x_1 >> y_1;
    cout << "Nhap diem B(x2_y2) cach nhau boi dau cach : ";
    cin >> x_2 >> y_2;
    float P = euclidean(x_1,x_2,y_1,y_2);
    cout << "Ket qua : " << P;
    return 0;
}