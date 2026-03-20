#include <iostream>
using namespace std;

int main(){
    long long n;
    do {
        cout << "Nhap so nguyen n : ";
        cin >> n;
    } while(n < 1 ||n > 30);
    double a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    double b[n], c[n]; long long m = 0, l = 0;
    for(long long i=0;i<n;i++){
        if(a[i] < 0){
            b[m] = a[i]; m++;
        } else {
            c[l] = a[i]; l++;
        }
    }
    cout << "Cac gia tri am    : ";
    for(long long i=0;i<m;i++) cout << b[i] << " ";
    cout << endl;
    cout << "Cac gia tri duong : ";
    for(long long i=0;i<l;i++) cout << c[i] << " ";
}