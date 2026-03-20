#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long m,n;
    do{
        cout << "Nhap so nguyen m (3 <= m <= 15) (dong) : ";
        cin >> m;
    } while (m<3 || m > 15);
    do{
        cout << "Nhap so nguyen m (1 <= n <= 15) (cot)  : ";
        cin >> n;
    } while (n<1 || n > 15);
    long long a[m][n];
    cout << "Nhap " << m*n << " phan tu tu trai sang phai theo chieu ngang cach nhau boi dau cach : ";
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cout << endl << "Ma tran da nhap : " << endl;
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}