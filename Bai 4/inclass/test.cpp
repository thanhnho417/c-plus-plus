#include <iostream>
#include "../../lib/mylib.h"
using namespace std;

int main(){
    int n;
    cout << "Nhap n : ";
    cin >> n;
    float a[n];
    cout << "Nhap " << n << " gia tri : ";
    for(int i=0;i<n;i++) cin >> a[i];
    Sapchen(a,n);
    for(int i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}