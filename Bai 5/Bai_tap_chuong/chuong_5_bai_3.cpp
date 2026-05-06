#include <iostream>
#include <cstring>
using namespace std;

void nhapxau(string &S){
    cout << "Nhap xau : ";
    getline(cin, S);
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
    string S;
    nhapxau(S);
    string tu_can_thay = "child", tu_thay_the = "children";
    thay_the_xau(S, tu_can_thay, tu_thay_the);
    cout << S;
}