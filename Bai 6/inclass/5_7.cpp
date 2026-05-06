#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : "; cin >> n;
    int *a = new int[n];
    cout << "Nhap " << n << " phan tu : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    ofstream fout("FILEgido.txt", ios::out);
    for(int i=0;i<n;i++) fout << *(a+i) << " ";
    fout.close();
    delete[] a;
}