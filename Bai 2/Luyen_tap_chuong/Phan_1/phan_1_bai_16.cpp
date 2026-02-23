#include <iostream>
using namespace std;

int main(){
    long S = 0, x,n;
    cout << "Nhap so nguyen x, n cach nhau boi dau cach : ";
    cin >> x >> n;
    long t = x;
    for(long i=0; i <= n; i++){
        S += t;
        t *= x*x;
    }
    cout << "Ket qua : " << S;
    return 0;
}