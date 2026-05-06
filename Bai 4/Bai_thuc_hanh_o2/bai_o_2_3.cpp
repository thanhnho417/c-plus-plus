#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long n, m, k;
    cout << "Nhap so nguyen n, m cach nhau boi dau cach : ";
    cin >> n >> m;
    double a[n][m] = {0}, tong = 0;
    cout << "Nhap " << n*m << " gia tri cuua ma tran a cach nhau boi dau cach : \n";
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin >> a[i][j];
            tong+=a[i][j];
        }
    }
    double TB = tong/(n*m);
    cout << "Nhap gia tri K : ";
    cin >> k;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            if (a[i][j] > k) a[i][j] = TB;
        }
    }
    cout << "Ma tran A da khu nhieu : \n";
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}