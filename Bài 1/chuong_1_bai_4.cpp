#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b;
    cout << "Nhap canh huyen: ";
    cin >> a;
    cout << "Nhap canh goc vuong: ";
    cin >> b;
    float kq = sqrt(pow(a,2)+pow(b,2))/2.0;
    cout << "Ban kinh duong tron noi tiep tam giac: " << kq;
    return 0;
}