#include <iostream>
using namespace std;

void gt(long x){
    long kq = 1;
    for(long i=1;i<=x;i++){
        kq*=i;
    }
    cout << "Ket qua : " << kq;
}
int main(){
    long m,n;
    cout << "Nhap hai so nguyen m,n cach nhau boi dau cach : ";
    cin >> m >> n;
    gt(m);
    cout << endl;
    gt(n);
    return 0;
}