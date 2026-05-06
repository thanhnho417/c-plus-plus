#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


void xuat_mang(int *a, int n, const char* ten_tep){
    ofstream fout(ten_tep, ios::out);
    for(int i=0;i<n;i++) fout << *(a+i) << " ";
    fout << endl;
    fout.close();
}
void xuat_them_mang(int *a, int n, const char* ten_tep){
    ofstream fout(ten_tep, ios::app);
    for(int i=0;i<n;i++) fout << *(a+i) << " ";
    fout << endl;
    fout.close();
}
void sap_xep_mang_giam_dan(int *a, int n){
    for(int i=1;i<n;i++){
        int temp = *(a+i), j=i-1;
        while (j>=0 && *(a+j) < temp){
            *(a+j+1) = *(a+j);
            j--;
        }
        *(a+j+1) = temp;
    }
}

void dem_so_lan_xuat_hien_va_in_vi_tri(int *a, int n, int x, int &so_lan){
    so_lan = 0;
    cout << "Vi tri xuat hien cua " << x << " trong mang a la : ";
    for(int i=0;i<n;i++){
        if (*(a+i) == x) {so_lan++; cout << i << " ";}
    }
    cout << endl;
}

int xoa_phan_tu_toi_thieu(int *a, int n){
    int P = 0, so_phan_tu = 0;
    for(int i=0;i<n;i++) P += *(a+i);
    if(P<20) return 0;
    for(int i=0;i<n;i++){
        P-= *(a+i);
        so_phan_tu++;
        if (P <= 20) break;
    }
    return so_phan_tu;
}

int main(){
    int *a, n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    a = new int[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    cout << "Mang vua nhap : ";
    for(int i=0;i<n;i++){
        cout << *(a+i) << " ";
    }
    cout << endl;
    xuat_mang(a,n,"D:\\kq.txt");
    sap_xep_mang_giam_dan(a,n);
    cout << "Mang sau khi sap xep : ";
    for(int i=0;i<n;i++){
        cout << *(a+i) << " ";
    }
    cout << endl;
    xuat_them_mang(a,n,"D:\\kq.txt");
    cout << "File duoc ghi tai D:\\kq.txt" << endl;
    int so_lan = 0, x;
    cout << "Nhap so nguyen x : ";
    cin >> x;
    dem_so_lan_xuat_hien_va_in_vi_tri(a,n,x,so_lan);
    cout << "So lan xuat hien " << x << " trong mang a : " << so_lan << endl;
    cout << "So phan tu can xoa de P khong vuot qua 20 : " << xoa_phan_tu_toi_thieu(a,n) << endl;
    delete[] a;
}