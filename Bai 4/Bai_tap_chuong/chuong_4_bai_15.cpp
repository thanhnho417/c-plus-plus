#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long long n;
    do {
        cout << "Nhap so nguyen n (3 <= n <= 15) : ";
        cin >> n;
    } while (n<3 || n > 15);
    double a[n][n] = {0};
    cout << "Nhap lan luot theo chieu ngang " << n*n << " gia tri cua ma tran a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++)
        cin >> a[i][j];
    }
    double det = 1.0;
    bool zero = false;
    cout << endl << "Ma tran vua nhap : " << endl;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    for(long long i=0;i<n;i++){
        long long pivot = i;
        for(long long j=i+1;j<n;j++){
            if(abs(a[j][i]) > abs(a[pivot][i])) pivot = j;
        }
        if (pivot != i){
            for(long long k = 0;k<n;k++){
                double tp = a[i][k];
                a[i][k] = a[pivot][k];
                a[pivot][k] = tp;
            }
            det*=-1;
        }
        if(abs(a[i][i]) < 1e-9){
            det = 0;
            zero = true;
            break;
        }
        det*=a[i][i];
        for(long long j=i+1;j<n;j++){
            double cong = a[j][i]/a[i][i];
            for(long long k=i;k<n;k++){
                a[j][k] -= cong * a[i][k];
            }
        }
    }
    cout << fixed << setprecision(2) << "\nDinh thuc cua ma tran : " << det << endl;
    return 0;
}