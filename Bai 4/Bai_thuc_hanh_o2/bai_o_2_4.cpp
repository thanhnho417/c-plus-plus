#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long n,m;
    cout << "Nhap so nguyen n,m cach nhau boi dau cach : ";
    cin >> n >> m;
    double a[n][m] = {0};
    double b[n][m] = {0};
    cout << "Nhap lan luot tu trai sang phai " << n*m << " gia tri cua ma tran A cach nhua boi dau cach : " << endl;
    for (long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    
    for(long long i=1;i<n-1;i++){
        for(long long j=1;j<m-1;j++){
            b[i][j] = (double)(a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1])/4;
        }
    }
    cout << endl << "Ma tran sau khi lam phang : " << endl;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cout << setw(10) << b[i][j];
        }
        cout << endl;
    }
}