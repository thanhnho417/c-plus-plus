#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so tien phai tra : ";
    cin >> n;
    if (n>=200000 && n < 300000) cout << "So tien khuyen mai : " << (double)n*0.2;
    else if (n>=300) cout << "So tien khuyen mai : " << (double)n*0.3;
    else cout << "Khong co khuyen mai";
    return 0;
}