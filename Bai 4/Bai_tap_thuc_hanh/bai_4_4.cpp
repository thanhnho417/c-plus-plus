#include <iostream>
using namespace std;

double maxmangsothuc(double a[], long long n, long long &max){
    double kq = a[0];
    for(long i=0;i<n;i++) if (a[i] > kq) {kq = a[i];max=i;}
    return kq;
}

double minmangsothuc(double a[], long long n, long long &min){
    double kq = a[0];
    for(long i=0;i<n;i++) if (a[i] < kq) {kq = a[i];min=i;}
    return kq;
}

void xoaphantumangthuc(double a[], long long k, long long &n){
    for(long long i=k;i<n;i++) a[i-1] = a[i];
    n--;
}

void sapxepmangthuc(double a[], long long n){
    for(long long i=1;i<n;i++){
        double tg = a[i]; long long j = i-1;
        while(j>=0 && a[j] > tg){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tg;
    }
}

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    double a[n];
    cout << "Nhap " << n << " gia tri cua mang cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    long long dem_max = 0, dem_min = 0;
    double gtmax = maxmangsothuc(a,n,dem_max);
    double gtmin = minmangsothuc(a,n,dem_min);
    xoaphantumangthuc(a,dem_max,n);
    xoaphantumangthuc(a,dem_min,n);
    sapxepmangthuc(a,n);
    cout << gtmax << " ";
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    cout << gtmin << " ";
    return 0;
}