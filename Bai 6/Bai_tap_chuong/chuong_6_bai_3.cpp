#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,m;
    cout << "Nhap so nguyen n, m cach nhau boi dau cach : ";
    cin >> n >> m;
    double**B = new double*[n];
    for(int i=0;i<n;i++){
        B[i] = new double[m];
    }
    for(int i=0;i<n;i++){
        cout << "Nhap lan luot " << m << " phan tu hang thu " << i+1 << " cach nhau boi dau cach : ";
        for(int j=0;j<m;j++){
            cin >> B[i][j];
        }
    }
    cout << "Ma tran vua nhap : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << setw(10) << B[i][j] << " ";
        }
        cout << endl;
    }
    double tong = 0;
    for(int i=0;i<m;i++) tong += B[0][i];
    double so_am = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(B[i][j] < 0 && B[i][j] < so_am) so_am = B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(B[i][j] < 0 && B[i][j] > so_am) so_am = B[i][j];
        }
    }
    cout << "Tong dong dau  : " << tong << endl;
    cout << "So am lon nhat : " << so_am << endl;
    cout << "Ma tran chuyen vi : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << setw(10) << B[j][i];
        }
        cout << endl;
    }
    delete[] B;
}