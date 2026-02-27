#include <iostream>
using namespace std;
void nhapso(double &a, char k){
    cout << "Nhap so thuc "  << k <<  " : ";
    cin >> a;
}
long long maxbaso(double a, double b, double c){
    long long kq = 0;
    if (a < b) kq = b; else kq = a;
    if (kq < c) kq = c;
    return kq;
}

long long minbaso(double a, double b, double c){
    long long kq=0;
    if(a>b) kq = b; else kq=a;
    if(kq>c) kq = c;
    return kq;
}
int main(){
    double a,b,c,d,e;
    nhapso(a, 'a');
    nhapso(b,'b');
    nhapso(c, 'c');
    cout << "Gia tri lớn nhat của ba so a,b,c la : " << maxbaso(a,b,c) << endl;
    cout << "Gia tri nho nhat của ba so a,b,c la : " << minbaso(a,b,c) << endl;
    nhapso(d, 'd');
    nhapso(e, 'e');
    cout << "Gia tri lớn nhat của nam so a,b,c,d,e la : " << maxbaso(maxbaso(a,b,c),d,e) << endl;
    cout << "Gia tri nho nhat của nam so a,b,c,d,e la : " << minbaso(minbaso(a,b,c),d,e) << endl;
    return 0;
}
