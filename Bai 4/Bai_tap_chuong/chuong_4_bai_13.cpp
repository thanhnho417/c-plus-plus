#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long m,n,p,q;
    do{
        cout << "Nhap so nguyen m (1 <= m <= 20) (dong) : ";
        cin >> m;
    } while (m<1 || m > 20);
    do{
        cout << "Nhap so nguyen m (1 <= n <= 20) (cot)  : ";
        cin >> n;
    } while (n<1 || n > 20);
    long long a[m][n];
    cout << "Nhap " << m*n << " phan tu tu trai sang phai theo chieu ngang cach nhau boi dau cach : ";
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    do{
        cout << "Nhap so nguyen p (1 <= p <= 20) (dong) : ";
        cin >> p;
    } while (p<1 || p > 20);
    do{
        cout << "Nhap so nguyen q (1 <= q <= 20) (cot)  : ";
        cin >> q;
    } while (q<1 || q > 20);
    long long b[p][q];
    cout << "Nhap " << p*q << " phan tu tu trai sang phai theo chieu ngang cach nhau boi dau cach : ";
    for(long long i=0;i<p;i++){
        for(long long j=0;j<q;j++){
            cin >> b[i][j];
        }
    }
    long long c[m][n];
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    cout << endl << "Tong hai ma tran a va b : " << endl;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            cout <<setw(5) << c[i][j];
        }
        cout << endl;
    }
    long long d[m][q];
    for(long long i=0;i<n;i++){
        for(long long j=0;j<q;j++){
            d[i][j] = 0;
            for(long long k=0;k <n;k++){
                d[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    cout << endl << "Tich hai ma tran a va b : " << endl;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            cout <<setw(5) << d[i][j];
        }
        cout << endl;
    }
}