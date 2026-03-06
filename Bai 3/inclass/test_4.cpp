#include <iostream>
using namespace std;

long long giaithua(long long n){
    if(n==1) return 1;
    else return n*giaithua(n-1);
}

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << "GT = " << giaithua(n);
    return 0;
}