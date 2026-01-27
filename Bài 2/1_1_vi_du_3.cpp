#include <iostream>
using namespace std;

int main()
{
    float diem;
    char hanh_kiem;
    cout << "Nhap so diem : ";
    cin >> diem;
    cout << "Nhap hanh kiem : ";
    cin >> hanh_kiem;
    if (diem >= 9 && hanh_kiem == 'T')
    {
        cout << "Thuong 400000";
    }
    else if (diem >= 7)
    {
        cout << "Thuong 300000";
    }
    return 0;
}