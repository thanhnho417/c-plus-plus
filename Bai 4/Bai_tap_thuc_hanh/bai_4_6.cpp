#include <iostream>
#include <cmath>
using namespace std;

long long x_1(long long a[], long long n){
    long long kq = 0;
    for(long long i=0;i<n;i++){
        if(a[i]< 0) kq+=-1*a[i];
        else kq += a[i];
    }
    return kq;
}

double x_2(long long a[], long long n){
    double kq = 0, t = 0;
    for(long long i=0;i<n;i++){
        t += a[i]*a[i];
    }
    kq = (double)sqrt(t);
    return kq;
}

long long x_vc(long long a[], long long n){
    long long kq = a[0];
    for(long long i=0;i<n;i++){
        if(kq < a[i]) kq = a[i];
    }
    return kq;
}
long long x_card(long long a[], long long n){
    long long kq = 0;
    for(long long i=0;i<n;i++){
        if (a[i] != 0) kq++;
    }
    return kq;
}

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    long long a[n];
    cout << "Nhap " << n << " phan tu cua mang cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    cout << "Chuan X_1      : " << x_1(a,n) << endl;
    cout << "Chuan X_2      : " << x_2(a,n) << endl;
    cout << "Chuan X_vo cuc : " << x_vc(a,n) << endl;
    cout << "Chuan X_card   : " << x_card(a,n) << endl;
}