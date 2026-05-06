#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long n,m;
    cout << "Nhap so nguyen n, m cach nhau boi dau cach : ";
    cin >> n >> m;
    double a[n][m] = {0}, L = 0;
    cout << "Nhap lan luot tu trai sang phai " << n*m << " gia tri cua ma tran A cach nhau boi dau cach : \n";
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin >> a[i][j];
            if (a[i][j] >= L) L = a[i][j];
        }
    }
    cout << endl;
    double b[n][m] = {0};
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            b[i][j] = (double) L - a[i][j];
        }
    }
    cout << endl << "Ma tran B : " << endl;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cout << setw(5) << b[i][j];
        }
        cout << endl;
    }
}