#include <iostream>
using namespace std;

int main(){
    long long m, n, C_m_n;
    cout << "Nhap cac gia tri cua to hop chap m cua n (m, n) cach nhau boi dau cach : ";
    cin >> m >> n;
    double tich = 1, i = 1, giai_thua_m = 1;
    while(i <= m){
        tich*=n-i+1;
        giai_thua_m*=i;
        i++;
    }
    C_m_n = tich/giai_thua_m;
    cout << "Ket qua : " << C_m_n;
    return 0;
}