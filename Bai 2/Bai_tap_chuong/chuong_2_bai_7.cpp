#include <iostream>
using namespace std;

int main(){
    long long n,S = 1;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    for (long long i=1;i<=n;i++)S*=i;
    cout << "Ket qua : " << S;
    return 0;
}