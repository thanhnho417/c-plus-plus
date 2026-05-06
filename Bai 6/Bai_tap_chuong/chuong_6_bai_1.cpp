#include <iostream>
using namespace std;

int main(){
    int a; double x;
    cout << "Nhap so nguyen a, so thuc x cach nhau boi dau cach : ";
    cin >> a >> x;
    cout << "Dia chi cua a : " << &a << endl << "Dia chi cua x : " << &x << endl;
    cout << "Gia tri cua a : " << a << endl << "Gia tri cua x : " << x << endl;
    int *p = &a; double *q = &x;
    cout << "Dia chi cua p khi tro vao a : " << &a << endl << "Dia chi cua q khi tro vao x : " << &x << endl;
    cout << "Gia tri cua p khi tro vao a : " << a << endl << "Gia tri cua q khi tro vao x : " << x << endl;
}