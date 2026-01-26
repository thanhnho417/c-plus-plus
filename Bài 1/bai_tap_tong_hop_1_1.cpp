#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int nghin = (n - n%1000)/1000;
    n -= nghin*1000;
    int tram = (n - n%100)/100;
    n -= tram*100;
    int chuc = (n - n%10)/10;
    n -= chuc*10;
    cout << nghin << " nghin " << tram << " tram " << chuc << " chuc " << n << " don vi";
    return 0; 
}