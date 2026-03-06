#include <iostream>
using namespace std;

int checktypechar(char k){
    if(k >= '0' && k <= '9') return 1;
    else if (k >= 'a' && k <= 'z') return 2;
    else return 3;
}
char hoathanhthuong(char k){
    return k^32;
}
char thuongthanhhoa(char k){
    return k^32;
}
int main(){
    char k;
    cout << "Nhap kí tu : " ;
    cin >> k;
    int T = checktypechar(k);
    if (T == 1) cout << "Khong phai chu cai";
    else if (T==2){
        cout << "La chu cai viet thuong" << endl;
        cout << "Bien doi : " << thuongthanhhoa(k);
    }
    else {
        cout << "La chu cai viet hoa" << endl;
        cout << "Bien doi : " << hoathanhthuong(k);
    }
    return 0;
}