#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap ma hoc vi : ";
    cin >> n;
    switch(n){
        case 1: cout << "Cu nhan"; break;
        case 2: cout << "Ki su"; break;
        case 3: cout << "Thac si"; break;
        case 4: cout << "Tien si"; break;
        default: cout << "Khong co xep loai hoc vi";
    }
    return 0;
}