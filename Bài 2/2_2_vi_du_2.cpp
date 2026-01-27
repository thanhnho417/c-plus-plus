#include <iostream>
using namespace std;

int main(){
    int diem_dao_duc, ngay_di_muon;
    cout << "Nhap diem dao duc : ";
    cin >> diem_dao_duc;
    cout << "Nhap ngay di hoc muon : ";
    cin >> ngay_di_muon;
    while(ngay_di_muon > 0){
        diem_dao_duc -= 1;
        ngay_di_muon -= 1;
    }
    cout << "Diem con lai : " << diem_dao_duc;
    return 0;
}