#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen duong n (1 <= n <= 30) : ";
    cin >> n;
    long long a[n];
    cout << "Nhap " << n << " phan tu vao mang cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    long long giam = 0, tang = 0, bang = 0;
    for(long long i=1;i<n;i++){
        if(a[i] > a[i-1]) tang++;
        if(a[i] < a[i-1]) giam++;
        if(a[i] == a[i-1]) bang++;
    }
    if(tang !=0 && giam != 0) cout << "Mang khong co trat tu" << endl;
    else {
        if (bang == 0){
            if (tang != 0) cout << "Mang tang that su" << endl;
            if (giam != 0) cout << "Mang giam that su" << endl;
        } else {
            if (giam != 0) cout << "Mang giam dan" << endl;
            if (tang != 0) cout << "Mang tang dan" << endl;
        }
    }
    return 0; 
}