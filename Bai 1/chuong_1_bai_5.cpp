#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;
    cout << "Nhap cac canh cua tam giac ABC cach nhau boi dau cach: ";
    cin >> a >> b >> c;
    float p_nho = (a + b + c)/2.0;
    float kq = (a*b*c)/(4*sqrt(p_nho*(p_nho-a)*(p_nho - b)*(p_nho - c)));
    cout << "Ban kinh duong tron ngoai tiep tam giac: " << kq;
    return 0;
}