#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, so_am = 0, so_duong = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    double *a = new double[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    double *b = (double*) malloc(0);
    double *c = (double*) malloc(0);
    for(int i=0;i<n;i++){
        if (*(a+i) < 0){
            b = (double*) realloc(b, (so_am+1)*sizeof(double));
            *(b+so_am) = *(a+i);
            so_am++;
        }
        else if (*(a+i) > 0){
            c = (double*) realloc(c, (so_duong+1)*sizeof(double));
            *(c+so_duong) = *(a+i);
            so_duong++;
        }
    }
    cout << "Mang a : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    cout << endl;
    cout << "Mang b : ";
    for(int i=0;i<so_am;i++) cout << *(b+i) << " ";
    cout << endl;
    cout << "Mang c : ";
    for(int i=0;i<so_duong;i++) cout << *(c+i) << " ";
    cout << endl;
    delete[] a; free(b); free(c);
}