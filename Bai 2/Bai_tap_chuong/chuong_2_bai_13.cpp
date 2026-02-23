#include <iostream>
using namespace std;

int main(){
    long long S_le = 0, S_chan = 0, n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if (n%2==0){
        S_chan = ((2+n)/2)*(((n-2)/2)+1);
        S_le = ((1+n-1)/2)*(((n-1-1)/2)+1);
    } else {
        S_chan = ((2+n-1)/2)*(((n-1-2)/2)+1);
        S_le = ((1+n)/2)*(((n-1)/2)+1);
    }
    cout << "Tong cac so chan : " << S_chan << endl;
    cout << "Tong cac so le   : " << S_le << endl;
    return 0;
}