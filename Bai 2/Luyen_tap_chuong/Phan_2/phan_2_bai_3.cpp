#include <iostream>
using namespace std;

int main(){
    long S_chan = 0, S_le = 0,n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;
    for (long i=1;i<=n;i++){
        if(i%2==0) S_chan+=i;
        else S_le+=i;
    }
    cout << "Tong cac so chan tu 1 den n : " << S_chan << endl;
    cout << "Tong cac so le tu 1 den n : " << S_le << endl;
    return 0;
}