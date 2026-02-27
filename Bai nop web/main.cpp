#include <iostream>
#include <iomanip>
using namespace std;

float nhapbienthuc(){
    float x;
    cout << "Nhap bien x : ";
    cin >> x;
    return x;
}
long nhapbiennguyen(char t){
    long n;
    cout << "Nhap bien " << t << " : ";
    cin >> n;
    return n;
}
long tang1dv(long n){
    return n+1;
}
long giam1dv(long n){
    return n-1;
}
double giatriP(double x, long n){
    double P = 2018;
    for(long i=1;i<=n;i++) P*=x;
    double ts = x, ms = 1;
    for(long i=2;i<=n;i++){
        ts*=x;
        ms*=3;
        P+=(double)ts/ms;
    }
    return P;
}
long long tinhtongchan(long n, long m){
    long long T = 0;
    for(long i=n;i<=m;i++){ 
        if(i >= 6 && i%2==0) T += i;
    }
    return T;
}
int main(){
    long long m,n; double x;
    x = nhapbienthuc();
    n = nhapbiennguyen('n');
    m = nhapbiennguyen('m');
    cout << "Gia tri m tang 1 dv : " << tang1dv(m) << endl;
    cout << "Gia tri n tang 1 dv : " << tang1dv(n) << endl;
    cout << setprecision(6) << fixed;
    cout << "Gia tri P = " << giatriP(x,n) << endl;
    if(n < m) cout << "Tong cac gia tri chan lon hon 5 tu " << n << " den " << m << " la : " << tinhtongchan(n,m) << endl;
    else cout << "Do " << n << " > " << m << " nen khong co tong tu " << n << " den " << m << endl;
    return 0;
}