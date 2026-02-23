#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,P = 0; long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    if(n>=1 && x!=0){
        double tu_so = sqrt(x*x);
        for (long i=2;i<=n;i++) P+= (double)tu_so/i;
        cout << "Ket qua : " << P;
    } else cout << "Ket qua : " << (double)x*n*n*n;
    return 0;
}