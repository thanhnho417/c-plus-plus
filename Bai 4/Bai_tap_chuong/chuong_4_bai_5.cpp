#include <iostream>
using namespace std;


int main(){
    long long n;
    do {
        cout << "Nhap so nguyen n (1<=n<=30) : ";
        cin >> n;
    } while (n<1 || n > 30);
    double a[n+1];
    cout << "Nhap " << n << " phan tu của mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    cout << endl;
    cout << "Mang a theo chieu nguoc lai : ";
    for(long long i=n-1;i>=0;i--) cout << a[i] << " ";
    cout << endl << endl;
    for(long long i=1;i<n;i++){
        double tb = a[i]; long long j = i-1;
        while(j>=0 && a[j]<tb){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tb; 
    }
    
    cout << "Mang a sap xep giam dan     : ";
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    double x;
    cout << endl << endl;
    cout << "Nhap so thuc x : ";
    cin >> x;
    cout << endl;
    long long k = 0;
    while(x < a[k]){
        if (x >= a[k]) break;
        k++;
    }
    for(long long i=n;i>=k;i--){
        a[i] = a[i-1];
    }
    a[k] = x;
    cout << "Mang moi sau khi chen       : ";
    for(long long i=0;i<=n;i++){
        cout << a[i] << " ";
    }
    return 0;
}