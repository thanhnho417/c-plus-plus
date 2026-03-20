#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    double a[n];
    for(long i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    double max=a[0], min=a[0];
    for(long i=0;i<n;i++){
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << " " << endl;
    cout << "GTLN : " << max << endl;
    cout << "GTNN : " << min << endl;
    return 0;
}