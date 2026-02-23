#include <iostream>
using namespace std;

int main(){
    double S = 0; long x,n,t,m=1;
    cout << "Nhap so nguyen x,n cach nhau boi dau cach : ";
    cin >> x >> n;
    S = x;
    t = x;
    for(long i=1; i <= n; i++){
        t*= x*x;
        m *= 2*i*(2*i+1);
        S+= (double)t/m;
    }
    cout << "Ket qua : " << S;
    return 0;
}