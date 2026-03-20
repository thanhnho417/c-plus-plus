#include <iostream>
using namespace std;

int main(){
    long long a[100], n = 0;
    while (n<100){
        long long gtnhap;
        cout << "Nhap gia tri a[" << n << "] : ";
        cin >> gtnhap;
        if(gtnhap == -1) break;
        else {
            a[n] = gtnhap;
            n++;
        }
    }
    cout << "So phan tu duoc nhap : " << n;
    cout << endl << "Mang a sau khi nhap             : ";
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    for(long long i=1;i<n;i++){
        long long tg = a[i], j=i-1;
        while(j>=0 && a[j]<tg){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tg;
    }
    cout << endl << "Mang a sau khi sap xep giam dan : ";
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}