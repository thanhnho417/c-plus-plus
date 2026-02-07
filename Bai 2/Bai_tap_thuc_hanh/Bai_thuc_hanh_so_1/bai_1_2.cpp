#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int i = n;
    int hang_nghin = (n - n%1000)/1000;
    n -= hang_nghin*1000;
    int hang_tram = (n - n%100)/100;
    n -=hang_tram*100;
    int hang_chuc = (n - n%10)/10;
    n -= hang_chuc*10;
    cout << "So " << i << " doc la : " << hang_nghin << " nghin " << hang_tram << " tram " << hang_chuc << " chuc " << n << " don vi";
    return 0;
}