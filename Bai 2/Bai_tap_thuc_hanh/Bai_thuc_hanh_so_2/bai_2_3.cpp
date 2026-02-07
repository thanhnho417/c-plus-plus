#include <iostream>
using namespace std;

int main(){
    float x; int n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    if(n%2!=0) cout << "Ket qua : 0" << endl;
    else{
        double S = 2016*x;
        double T = x, M=1;
        for(long i=1;i<=n;i++){
            T *= x;
            M*= 3;
            S += (double)T/M;
        }
        cout << "Ket qua : " << S;
        return 0;
    }
}