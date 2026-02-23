#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long S = 0,n, count = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (long long i=2;i<=n;i++){
        bool check = true;
        for(long long j=2;j<=sqrt(i);j++){
            if (i%j==0){
                check = false;
                break;
            }
        }
        if(check){
            S+=i;
            count += 1;
        }
    }
    cout << "Tong cac so nguyen to : " << S << endl;
    cout << "So cac so nguyen to   : " << count << endl;
    return 0;
}