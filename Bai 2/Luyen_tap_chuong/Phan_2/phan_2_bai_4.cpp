#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    bool check = true;
    for (long i=2;i<=sqrt(n);i++){
        if (n%i==0){
            check = false;
            cout << n << " khong phai la so nguyen to";
            break;
        }
    }
    if(check) cout << n << " la so nguyen to";
    return 0;
}