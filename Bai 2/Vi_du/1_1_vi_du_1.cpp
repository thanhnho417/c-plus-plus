#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n%2 == 0){
        cout << "Day la so chan";
    } else {
        cout << "Day la so le";
    }
    return 0;
}