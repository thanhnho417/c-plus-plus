#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    long long a[n];
    for (long i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for(long i=1;i<n;i++){
        long long tg = a[i], t = i-1;
        while (t >= 0 && a[t] > tg){
            a[t+1] = a[t];
            t--;
        }
        a[t+1] = tg;
    }
    cout << "Day da duoc sap xep : " << endl ;
    for(long i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}