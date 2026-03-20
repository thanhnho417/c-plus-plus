#include <iostream>
using namespace std;

int main(){
    long long n;
    do {
        cout << "Nhap so nguyen n (1<=n<=30) : ";
        cin >> n;
    } while (n<1 || n > 30);
    double a[n], b[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> a[i];
    cout << "Nhap " << n << " phan tu cua mang b cach nhau boi dau cach : ";
    for(long long i=0;i<n;i++) cin >> b[i];
    long long k = 0, dem = n+n;

    double c[dem];
    for(long long i=0;i<n;i++,k++){
        c[k] = a[i];
    }
    for(long long i=0;i<n;i++,k++){
        c[k] = b[i];
    }
    for(long long i=0;i<dem;i++){
        cout << c[i] << " ";
    }
    cout << endl;
    long long i=0;
    while(i<n){
        double kq = c[i];
        long long j = i+1;
        while(j < dem){
            if (c[j] == kq){
                for(long long m=j;m<dem-1;m++) c[m] = c[m+1];
                dem--;
            } else j++;
        }
        i++;
    }

    for(long long i=0;i<dem;i++){
        cout << c[i] << " ";
    }
    return 0;
}