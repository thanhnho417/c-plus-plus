#include <iostream>
using namespace std;

void nhapn(long &n){
    cout << "Nhap so nguyen n : ";
    cin >> n;
}
void tang1dv(long &n){
    n += 1;
}

int main(){
    long n;
    nhapn(n);
    tang1dv(n);
    tang1dv(n);
    tang1dv(n);
    cout << "n = " << n;
    return 0;
}