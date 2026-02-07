#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int N = (n - n%1000)/1000;
    n -= N*1000;
    int T = (n - n%100)/100;
    n -= T*100;
    int C = (n - n%10)/10;
    n -= C*10;
    cout << N << " nghin " << T << " tram " << C << " chuc " << n << " don vi";
    return 0;
}