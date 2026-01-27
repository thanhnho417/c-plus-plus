#include <iostream>
using namespace std;
int main(){
    int n; long kq = 1;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (int i = 2; i <= n; i++){
        kq *= i;
    }
    cout << "Ket qua : " << kq;
    return 0;
}