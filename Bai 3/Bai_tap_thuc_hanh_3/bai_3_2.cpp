#include <iostream>
using namespace std;

double bieuthuc(double x, long long n){
    return (double) 2*x*x+n*x+n;
}
int main(){
    double x,y; long long n;
    cout << "Nhap so thuc x,y va so nguyen n cach nhau boi dau cach : ";
    cin >> x >> y >> n;
    double P = bieuthuc(x,n)+bieuthuc(y,n)-bieuthuc(x+y,n);
    cout << "Ket qua P = " << P;
    return 0;
}