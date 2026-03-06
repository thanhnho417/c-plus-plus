#include <iostream>
using namespace std;

int main(){
    double x, P = 2022.0, tuso = 1.0, mauso = 1.0/3.0; int n;
    cout << "Nhap so thuc x va so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    for (int i = 1; i <= n; i ++){
        tuso *= x;
        mauso *= 3.0*3.0;
        P += double(tuso/mauso);
    }
    cout << "Ket qua : " << P;
    return 0;
}