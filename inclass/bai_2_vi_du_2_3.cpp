#include <iostream>
using namespace std;
int main(){
    int n, kq = 1;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;
    for (int i = 1; i <= n; i++) kq*= i;
    cout << "Giai thua : " << kq;
    return 0;
}