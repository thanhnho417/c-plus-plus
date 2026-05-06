#include <iostream>
#include <cstring>
using namespace std;

void nhap_xau(string &str1, string &str2){
    cout << "Nhap xau str1 : ";
    getline(cin, str1);
    cout << "Nhap xau str2 : ";
    getline(cin, str2);
}

void so_lan_xuat_hien_xau(string &str1, string &xau_tim, int &so_lan){
    size_t pos = str1.find(xau_tim);
    while(pos!=string::npos){
        so_lan++;
        pos = str1.find(xau_tim, pos + xau_tim.length());
    } 
}

void thay_the_xau(string &xau_can_thay, string &tu_can_thay, string &tu_thay_the){
    if (tu_thay_the.empty()) return;
    size_t vi_tri_thay = xau_can_thay.find(tu_can_thay);
    while(vi_tri_thay!=string::npos){
        xau_can_thay.replace(vi_tri_thay, tu_can_thay.length(), tu_thay_the);
        vi_tri_thay = xau_can_thay.find(tu_can_thay, vi_tri_thay + tu_can_thay.length());
    }
}

int main(){
    string str1, str2, str3;
    nhap_xau(str1, str2);
    int so_lan = 0;
    so_lan_xuat_hien_xau(str1, str2, so_lan);
    cout << "So lan xuat hien '" << str2 << "' trong xau str1 : " << so_lan << endl;
    cout << "Nhap xau str3 : ";
    getline(cin, str3);
    thay_the_xau(str1, str2, str3);
    cout << "Xau sau khi thay the : " << str1;
}