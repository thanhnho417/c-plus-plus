#include <iostream>
using namespace std;

void nhapmang(long long a[], long long &n){
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
}

long long tinhtongchanlon10(long long a[], long long n){
    long long kq = 0;
    for(long long i=0;i<n;i++){
        if(a[i] > 0 && a[i]%2==0) kq+= a[i];
    }
    return kq;
}
void xuatkq(long long kq){
    cout << "Ket qua : " << kq; 
}
int main(){
    long long n, a[1000];
    nhapmang(a,n);
    long long kq = tinhtongchanlon10(a,n);
    xuatkq(kq);
    return 0;
}