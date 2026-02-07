#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n; float x; float kq = 0; int i = 1;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << "Nhap so thuc x :";
    cin >> x;
    if (n%2 != 0){
        cout << kq;
    } else {
        while (i <= n){
            kq += pow(x,i)/pow(3, i-1);
            i++;
        }
    cout << "Ket qua : " << kq;
    }
    return 0;
}