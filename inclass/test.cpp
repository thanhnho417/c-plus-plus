#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    bool check = true;
    for (long i=2;i<=sqrt(n); i++){
        if (n%i == 0){
            check = false;
            cout << n << " la hop so";
            break;
        }
    }
    if(check){
        cout << n << " la so nguyen to";
    }
}