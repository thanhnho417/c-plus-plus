#include <iostream>
using namespace std;

int main()
{
    int so_can_nhap;
    cout << "Nhap so can doc: ";
    cin >> so_can_nhap;
    int so_hang_nghin, so_hang_tram, so_hang_chuc, so_hang_dv;
    so_hang_nghin = (so_can_nhap - so_can_nhap % 1000) / 1000;
    so_can_nhap -= so_hang_nghin * 1000;
    so_hang_tram = (so_can_nhap - so_can_nhap % 100) / 100;
    so_can_nhap -= so_hang_tram * 100;
    so_hang_chuc = (so_can_nhap - so_can_nhap % 10) / 10;
    so_can_nhap -= so_hang_chuc * 10;
    so_hang_dv = so_can_nhap;
    cout << "Noi dung: " << so_hang_nghin << " " << "nghin " << so_hang_tram << " " << "tram " << so_hang_chuc << " " << "chuc " << so_hang_dv << " " << "don vi";
    return 0;
}