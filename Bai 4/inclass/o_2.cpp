#include <iostream>
#include <cmath>
using namespace std;

void nhapsothucnnguyen(double &x, long long &n){
    cout << "Nhap so thuc x : ";
    cin >> x;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    while(n <= 0){
        cout << "Nhap lai so nguyen n : ";
        cin >> n;
    }
}

double somu(double x, long long n){
    double S = 1;
    for(long long i=1;i<=n;i++){
        S*=(double)x;
    }
    return S;
}


double F(double x, long long n){
    double S = 0;
    if(n>=3){
        S = 2020*x;
        for(long long i=1;i<=n;i++) S += somu(2,i);
    } else {
        S = sin(x);
        S*=somu(x,n);
    }
    return S;
}

double S(double x, long long n){
    double kq = 0;
    for(long long i=1;i<=n;i++) kq+=F(x,i);
    return kq;
}

int main(){
    double x; long long n;
    nhapsothucnnguyen(x,n);
    cout << "Ket qua : " << S(x,n);
    return 0;
}