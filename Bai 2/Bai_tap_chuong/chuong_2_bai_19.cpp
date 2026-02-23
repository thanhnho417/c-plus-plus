#include <iostream>
using namespace std;

int main(){
    double a, e = 0.00001, x_n = 1, x_n1 = 1;
    cout << "Nhap so thuc a : ";
    cin >> a;
    x_n = a;
    double check;
    while (true){
        x_n1 = (double)(x_n*x_n+a)/(2*x_n);
        check = (double)(x_n1-x_n)/x_n;
        if (check < 0) check*=-1;
        if (check < e) break;
        x_n = x_n1;
    }
    cout << "Ket qua : " << x_n1 << endl;
    return 0;
}