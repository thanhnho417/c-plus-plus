#include <iostream>
#include "../../lib/mylib.h"
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int a[n];
    cout << "Nhap " << n << " gia tri cua a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> a[i];
    int k;
    cout << "Nhap gia tri tim kiem : ";
    cin >> k;
    int L = 0, R = n-1;
    int kq = tknp_sn(a,k,L,R);
    cout << "Ket qua : " << kq;
    return 0;
}