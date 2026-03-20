#include <iostream>
using namespace std;

int main(){
    double a[100]; long long n = 0;
    while (n<100){
        double gtnhap;
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
    double x, mangdem[n];
    cout << endl << "Nhap gia tri x : ";
    cin >> x;
    long long dem=0;
    for(long long i=0;i<n;i++){
        if (a[i] == x){
            mangdem[dem] = i;
            dem++;
        }
    }
    cout << endl << x << " xuat hien " << dem << " lan trong mang a" << endl;
    cout << "Cac vi tri : " ;
    for(long long i=0;i<dem;i++) cout << mangdem[i]+1 << " ";
    return 0;
}