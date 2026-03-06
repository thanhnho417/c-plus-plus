#include <iostream>
using namespace std;

void nhiphan(long long n){
    long long T = n, kq = 0, j = 1;
    while(T > 0){
        kq += T%2*j;
        T /= 2;
        j*=10;
    }
    cout << "Ma nhi phan : " << kq;
}

int main(){
    long long n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;
    nhiphan(n);
    return 0;
}