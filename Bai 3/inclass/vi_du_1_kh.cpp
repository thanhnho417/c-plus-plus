#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout << "Nhap hai so nguyen m,n cach nhau boi dau cach : ";
    cin >> m >> n;
    long m_gt=1, n_gt=1, m_n_gt=1;
    for(long i=1;i<=m;i++){
        m_gt *= i;
    }
    for(long i=1;i<=n;i++){
        n_gt *=i;
    }
    for(long i=1;i<=m+n;i++){
        m_n_gt *= i;
    }
    double P = (double)(m_gt*n_gt)/m_n_gt;
    cout << "Ket qua P = " << P;
    return 0;
}