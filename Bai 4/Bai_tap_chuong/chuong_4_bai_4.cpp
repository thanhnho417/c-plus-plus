#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n (1 <= n <= 30) : ";
    cin >> n;
    while (n < 1 || n > 30)
    {
        cout << "Nhap lai so nguyen n (1 <= n <= 30) : ";
        cin >> n;
    }
    double a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    double S_tb = 0; long long dem = 0;
    for (long long i=0;i<n;i++){
        if (a[i] < 0 && -1*a[i] > 5){
            S_tb += a[i];
            dem++;
        }
    }
    S_tb = (double) S_tb/dem;
    cout << "Gia tri trung binh : " << S_tb << endl << endl;
    long long k;
    cout << "Nhap so nguyen k : ";
    cin >> k;
    if (k>n) cout << "Vi tri " << k << " khong thoa man" << endl;
    else{
        for(long long i=k;i<n;i++){
            a[i-1] = a[i];
        }
        n--;
    }
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}