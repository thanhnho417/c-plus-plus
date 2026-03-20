#include <iostream>
using namespace std;

bool kt_sapxep_sothuc_tangdan(double a[], long long n){
    for(long long i=1;i<n;i++){
        if (a[i] < a[i-1]){
            return false;
            break;
        }
    }
    return true;
}

bool kt_sapxep_sothuc_giamdan(double a[], long long n){
    for(long long i=1;i<n;i++){
        if (a[i] > a[i-1]){
            return false;
            break;
        }
    }
    return true;
}

int sap_tang_giam_ngat_thuc(double a[], long long n, bool &check){
    int kq = 0;
    for(long long i=1;i<n;i++){
        if (a[i-1] == a[i]) kq++;
    }
    for(long long i=1;i<n;i++){
        if(a[i-1]<a[i]) check = true;
        else check = false;
    }
    return kq;
}

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    double a[n];
    cout << "Nhap " << n << " phan tu cua mang cach nhau boi dau cach : ";
    for (long long i=0;i<n;i++) cin >> a[i];
    if(kt_sapxep_sothuc_giamdan(a,n) == false && kt_sapxep_sothuc_tangdan(a,n) == false) cout << "Mang chua duoc sap xep";
    else {
        cout << "Ham da duoc sap xep" << endl;
        bool check;
        int kq = sap_tang_giam_ngat_thuc(a,n,check);
        if(kq == 0){
            if (check) cout << "Day la mang duoc xep theo trat tu tang ngat";
            else cout << "Day la mang duoc xep theo trat tu giam ngat";
        } else {
            if (check) cout << "Day la mang duoc xep theo trat tu tang";
            else cout << "Day la mang duoc xep theo trat tu giam";
        }
    }
    return 0;
}