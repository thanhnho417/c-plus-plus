#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Nhap so cot n, so hang m cach nhau boi dau cach : ";
    cin >> n >> m;
    float **a = new float*[n];
    for(int i = 0; i < n; i++) {
        a[i] = new float[m];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "\nMa tran vua nhap : \n";
    for(int i = 0; i < n; i++) {
        float maxRow = a[i][0];
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
            if(a[i][j] > maxRow) maxRow = a[i][j];
        }
        cout << "=> Gia tri lon nhat tai dong thu" << i+1 << " la: " << maxRow << endl;
    }
    for(int i = 0; i < n; i++) delete[] a[i];
    delete[] a;
    return 0;
}