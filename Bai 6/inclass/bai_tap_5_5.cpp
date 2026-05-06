#include <iostream>
using namespace std;

int main() {
    int n, nb = 0, nc = 0;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    float *a = new float[n];
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if (a[i] < 0) nb++;
        else if (a[i] > 0) nc++;
    }
    float *b = new float[nb];
    float *c = new float[nc];
    int ib = 0, ic = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] < 0) b[ib++] = a[i];
        else if (a[i] > 0) c[ic++] = a[i];
    }
    cout << "\nMang a     : ";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\nMang b (am): ";
    for(int i = 0; i < nb; i++) cout << b[i] << " ";
    cout << "\nMang c (duong): ";
    for(int i = 0; i < nc; i++) cout << c[i] << " ";
    delete[] a; delete[] b; delete[] c;
    return 0;
}