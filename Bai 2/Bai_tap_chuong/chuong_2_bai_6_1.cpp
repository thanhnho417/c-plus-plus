#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Chon chuc nang : \n1: Tinh chu vi va dien tich hinh chu nhat\n2: Tinh chu vi va dien tich tam giac\n3: Tinh dien tich hinh thang\n4: Tinh chu vi va dien tich hinh tron\n5: Thoat\nLua chon : ";
    cin >> n;
    switch(n){
        case 1: cout << "Da chon chuc nang : Tinh chu vi va dien tich hinh chu nhat"; break;
        case 2: cout << "Da chon chuc nang : Tinh chu vi va dien tich tam giac"; break;
        case 3: cout << "Da chon chuc nang : Tinh dien tich hinh thang"; break;
        case 4: cout << "Da chon chuc nang : Tinh chu vi va dien tich hinh tron"; break;
        case 5: cout << "Tam biet"; break;
    }
    return 0;
}