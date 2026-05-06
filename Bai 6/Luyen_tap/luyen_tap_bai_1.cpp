#include <iostream>
#include <iomanip>
using namespace std;

double luy_thua(double x, long long n){
    if (n==1) return x;
    else if(n==0) return 1;
    else return x*luy_thua(x,n-1);
}

void nhap_tien_dien(long long &so_dien, long long &don_gia){
    cout << "Nhap don gia 1 so dien : "; cin >> don_gia;
    cout << "Nhap so dien tieu thu  : "; cin >> so_dien;
}

long long tinh_tien_dien(long long so_dien, long long don_gia){
    long long tong = 0;
    if (so_dien <= 100){
        return so_dien*don_gia;
    } else {
        tong = 100*don_gia + (so_dien-100)*don_gia*2;
        return tong;
    }
}

double F(long long x, long long k, long long n){
    double Q = tinh_tien_dien(x,n);
    double tong = 2020*luy_thua(x,n);
    long long tu_so = n;
    double mau_so = Q;
    for(long long i=0;i<n;i++){
        tong += (double) tu_so/mau_so;
        mau_so *= Q;
    }
    return tong;
}

int main(){
    long long so_dien, don_gia;
    long long n;
    nhap_tien_dien(so_dien,don_gia);
    cout << "Nhap so nguyen n : "; cin >> n;
    cout << "So tien phai tra : " << tinh_tien_dien(so_dien,don_gia) << endl;
    cout << "F(x,k,n) = " << setprecision(5) << fixed << F(so_dien,don_gia,n);
}