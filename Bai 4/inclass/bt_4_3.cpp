#include <iostream>
#include "../../lib/mylib.h"
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach, theo chieu tang dan : ";
    for(int i=0;i<n;i++) cin >> a[i];
}