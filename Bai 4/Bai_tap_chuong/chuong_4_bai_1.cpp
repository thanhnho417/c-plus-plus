#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n (1 <= n <= 30) : ";
    cin >> n;
    while(n<1 || n>30){
        cout << "Nhap lai so nguyen n (1 <= n <= 30) : ";
        cin >> n;
    }
    long long a[n];
    a[0] = 1; a[1] = 1;
    for(long long i=2;i<n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(long long i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    long long kq = 0;
    for(long long i=0;i<n;i++) kq+= a[i];
    cout << "Tong tat ca cac phan tu : " << kq;
    return 0;
}