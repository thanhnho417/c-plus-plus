#include <iostream>
using namespace std;

int main(){
    long long n, S = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    while(n<10 || n>20){
        cout << "Nhap lai so nguyen n : ";
        cin >> n;
    }
    S = (n*(n+1))/2;
    cout << "Ket qua : " << S;
    return 0;
}