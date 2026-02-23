#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double S = 0,x; double tu_so , mau_so=1;long long n;
    cout << "Nhap so thuc x, so nguyen n cach nhau boi dau cach : ";
    cin >> x >> n;
    cout << setprecision(6);
    if(n%2!=0) cout << "Ket qua : 0";
    else{
        S+=x;
        tu_so = x;
        for(long long i=1; i<=n-1;i++){
            tu_so *= x;
            mau_so *= 3;
            S+=(double)tu_so/mau_so;
        }
        cout << "Ket qua : " << S;
    } 
    return 0;
}