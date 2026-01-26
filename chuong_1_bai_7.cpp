#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, d, n;
    cout << "Nhap phan tu thu nhat a : ";
    cin >> a;
    cout << "Nhap cong sai d         : ";
    cin >> d;
    cout << "Nhap so phan tu         : ";
    cin >> n;
    float so_cuoi = a + (n-1)*d;
    float ket_qua = (a + so_cuoi)*n/2.0;
    cout << "Tong cap so cong la : " << ket_qua;
    return 0;
}