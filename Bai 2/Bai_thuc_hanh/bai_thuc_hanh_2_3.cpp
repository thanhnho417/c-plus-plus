#include <iostream>
using namespace std;

int main(){
    double P, x; int n;
    cout << "Nhap so thuc x va so nguyen n cach nhau boi dau cach : "; cin >> x >> n;
    if (n%2 != 0) cout << "Ket qua : 0";
    else {
        P = 2016.0*x;
        for (int i = 1; i <= n; i ++){
            double tuso = x, mauso = 1.0/3.0;
            tuso *= x;
            mauso *= 3.0*3.0;
            P += (double)tuso/mauso;
        }
        cout << "Ket qua : " << P;
    }
    return 0;
}