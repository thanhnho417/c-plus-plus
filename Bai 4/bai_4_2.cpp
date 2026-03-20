#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n : "; cin >> n;
    long long a[n];
    long long kq = 0;
    for(long long i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for(long long i=0;i<n;i++){
        if(a[i]%2==0 && a[i] > 10){
            kq+=a[i];
        }
    }
    cout << "Ket qua : " << kq;
    return 0;
}