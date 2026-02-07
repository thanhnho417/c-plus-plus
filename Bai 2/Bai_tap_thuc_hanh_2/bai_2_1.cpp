#include <iostream>
using namespace std;

int main(){
    int n, khuyen_mai;
    cout << "Nhap so tien phai tra : ";
    cin >> n;
    if(n>= 200 && n < 300) cout << "So tien khuyen mai : " << (double)n*0.2;
    else if(n>=300) cout << "So tien khuyen mai : " << (double)n*0.3;
    else cout <<"So tien khuyen mai : 0";
    return 0;
}