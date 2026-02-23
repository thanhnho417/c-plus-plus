#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if(n==1) cout << "1 khong phai so nguyen to \n 1 = 1";
    else if(n==2) cout << "2 = 2";
    else{
        bool check = true;
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                check = false;
                break;
            }
        }
        if(check) cout << n << " la so nguyen to";
        else {
            cout << n << " = ";
            bool first = true;
            for(long long i=2;i<=n;i++){
                while(n%i==0){
                    if(first) cout << i;
                    else {
                        cout << " x " << i;
                    }
                    n/=i;
                    first = false;
                    if (n == 1) break;
                }

            }
        }
    }
    return 0;
}