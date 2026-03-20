#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    long long x[n], y[n];
    cout << "Nhap " << n << " gia tri cua vecto x cach nhau boi dau cach : ";
    for(long i=0;i<n;i++) cin >> x[i];
    cout << "Nhap " << n << " gia tri của vecto y cach nhau boi dau cach : ";
    for(long i=0;i<n;i++) cin >> y[i];
    long long kq = 0;
    for(long i=0;i<n;i++) kq+=x[i]*y[i];
    cout << endl;
    cout << "Tich vo huong : " << kq;
    return 0;
}