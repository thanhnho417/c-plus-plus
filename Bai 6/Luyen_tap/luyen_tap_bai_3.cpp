#include <iostream>
#include <cmath>
using namespace std;

void nhap_gia_tri(long long &n, char k){
    do {
        cout << "Nhap so nguyen " << k << "(20 <= " << k << " <= 30) : ";
        cin >> n;
        if (n < 20 || n > 30) cout << "Thong tin khong hop le!" << endl;
    } while (n < 20 || n > 30);
}

double trung_binh_cong_so_le(long long n){
    if (n < 1) return -1;
    long long tong = 0, so_phan_tu = 0;
    for(long long i=1;i<=n;i+=2){
        tong += i;
        so_phan_tu++;
    }
    return (double) tong/so_phan_tu;
}

double D(double x, long long n){
    if (n <= 0) return -1;
    else if (x == 0) return 0;
    double kq = exp(fabs(x));
    long long tu_so = 0; double mau_so = 1;
    for(long long i=1;i<=n;i++){
        tu_so += i;
        mau_so *= x*x;
        kq+=(double)tu_so/mau_so;
    }
    return kq;
}

int main(){
    long long n,m;
    nhap_gia_tri(n, 'n');
    nhap_gia_tri(m, 'm');
    cout << "TBC phan tu le duong : " << trung_binh_cong_so_le(n) << endl;
    double x;
    cout << "Nhap so thuc x : ";
    cin >> x;
    cout << "D(x,n) = " << D(x,n) << endl;
}