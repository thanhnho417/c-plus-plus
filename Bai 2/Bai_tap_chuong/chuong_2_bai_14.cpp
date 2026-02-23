#include <iostream>
using namespace std;

int main(){
    long long S_am_le = 0, S_am_chan = 0, S_duong_le = 0, S_duong_chan = 0, n, m;
    cout << "Nhap cac so nguyen duong n, m cach nhau boi dau cach : ";
    cin >> n >> m;
    if(n%2!=0){
        S_am_le = ((-n-1)/2)*(((-1+n)/2)+1);
        S_am_chan = ((-n+1+-2)/2)*(((-2-(-n+1))/2)+1);
    } else {
        S_am_le = ((-n+1-1)/2)*(((-1-(-n+1))/2)+1);
        S_am_chan = ((-n+-2)/2)*(((-2+n)/2)+1);
    }
    if(m%2!=0){
        S_duong_le = (((1+m)/2))*(((m-1)/2)+1);
        S_duong_chan = (((2+m-1)/2))*(((m-1-2)/2)+1);
    } else {
        S_duong_le = (((1+m-1)/2))*(((m-1-1)/2)+1);
        S_duong_chan = (((m+2)/2))*(((m-2)/2)+1);
    }
    cout << "Tong cac so chan duong : " << S_duong_chan << endl;
    cout << "Tong cac so chan am    : " << S_am_chan << endl;
    cout << "Tong cac so le duong   : " << S_duong_le << endl;
    cout << "Tong cac so le am      : " << S_am_le << endl;
    return 0;
}