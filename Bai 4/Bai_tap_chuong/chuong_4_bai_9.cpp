#include <iostream>
using namespace std;

int main(){
    long long n;
    do{
        cout << "Nhap so nguyen n (1 <= n <= 30) : ";
        cin >> n;
    } while (n < 1 || n > 30);
    long long a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    long long b[n];
    for(long long i=0;i<n;i++) b[i] = a[n-1-i];cout << endl << "Mang b : ";
    for(long long i=0;i<n;i++) cout << b[i] << " ";
    return 0;
}