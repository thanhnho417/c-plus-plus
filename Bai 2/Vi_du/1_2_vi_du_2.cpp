#include <iostream>
using namespace std;

int main(){
    int thang, nam;
    cout << "Nhap nam : ";
    cin >> nam;
    cout << "Nhap thang cua nam " << nam << " :";
    cin >> thang;
    switch(thang){
        case 1: cout << "Tháng 1 năm " << nam << " co 31 ngay"; break;
        case 2: if (nam%4 ==0){cout << "Thang 2 nam " << nam << " co 29 ngay";} break;
        case 3: cout << "Thang 3 nam " << nam << " co 31 ngay"; break;
        case 4: cout << "Thang 4 nam " << nam << " co 30 ngay"; break;
        case 5: cout << "Thang 5 nam " << nam << " co 31 ngay"; break;
        case 6: cout << "Thang 6 nam " << nam << " co 30 ngay"; break;
        case 7: cout << "Thang 7 nam " << nam << " co 31 ngay"; break;
        case 8: cout << "Thang 8 nam " << nam << " co 31 ngay"; break;
        case 9: cout << "Thang 9 nam " << nam << " co 30 ngay"; break;
        case 10: cout << "Thang 10 nam " << nam << " co 31 ngay"; break;
        case 11: cout << "Thang 11 nam " << nam << " co 30 ngay"; break;
        case 12: cout << "Thang 12 nam " << nam << " co 31 ngay"; break;
        default: cout << "Thang khong hop le";
    }
}