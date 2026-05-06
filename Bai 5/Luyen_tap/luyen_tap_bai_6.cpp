#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void sap_xep_tang_dan(int *a, int n){
    for(int i=0;i<n;i++){
        int temp = *(a+i), j = i-1;
        while (j>=0 && *(a+j) > temp){
            *(a+j+1) = *(a+j);
            j--;
        }
        *(a+j+1) = temp;
    }
}

void xuat_mang(int *a, int n, const char* ten_tep){
    ofstream fout(ten_tep, ios::out);
    for(int i=0;i<n;i++) fout << *(a+i) << " ";
    fout << endl;
    fout.close();
    cout << "Da luu file tai " << ten_tep << endl;
}

bool kiem_tra_hop_le(int *a, int n){
    for(int i=0;i<n;i++){
        if (*(a+i)%3!=0 || *(a+i)%5!=0) return false;
    }
    return true;
}

void tinh_tong_nho_nhat(int *a, int n){
    int P = 0, min = *(a+0);
    for(int i=0;i<n-1;i++) {
        if(*(a+i) == min) P+= *(a+i);
    }
    cout << "Tong cac phan tu be nhat : " << P << endl;
}

void lay_nhieu_nhat(int *a, int n){
    int P = *(a+n-1), so_phan_tu = 0, tong = 0;
    for(int i=0;i<n-1;i++){
        if(tong + *(a+i) <= P){
            tong+=*(a+i);
            so_phan_tu++;
        } else break;
    }
    cout << "Co the lay nhieu nhat " << so_phan_tu << " phan tu trong mang a de tong cua chung khong vuot qua " << P << endl;
}

void xoa_it_nhat(int *a, int n){
    int P = 0, so_phan_tu = 0, i = n-1;
    for(int j=0;j<n;j++) P+= *(a+j);
    while(P > 20 && i >= 0){
        P-=*(a+i);
        so_phan_tu++;
        i--;
    }
    cout << "Có the xoa di it nhat " << so_phan_tu << " phan tu cua mang de tong cac phan tu con lai khong vuot qua 20" << endl;
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int *a = new int[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    sap_xep_tang_dan(a,n);
    cout << "Mang a sau khi sap xep : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    cout << endl;
    xuat_mang(a,n,"D:\\KQ.txt");
    tinh_tong_nho_nhat(a,n);
    bool check = kiem_tra_hop_le(a,n);
    if (check) cout << "Mang a hop le" << endl;
    else cout << "Mang a khong hop le" << endl; 
    lay_nhieu_nhat(a,n);
    xoa_it_nhat(a,n);
    delete[] a;
}