#include <iostream>
#include <fstream>
using namespace std;

void sap_xep_tang_dan(double *a, int n){
    for(int i=1;i<n;i++){
        double temp = *(a+i); int j = i-1;
        while(j>=0&&*(a+j)>temp){
            *(a+j+1) = *(a+j);
            j--;
        }
        *(a+j+1) = temp;
    }
}

void luu_file(double *a, double *b, int n, int m, const char* ten_tep){
    ofstream fout(ten_tep, ios::out);
    for(int i=0;i<n;i++) fout << *(a+i) << " ";
    fout << endl;
    for(int i=0;i<m;i++) fout << *(b+i) << " ";
    fout << endl;
    fout.close();
}

void xoa_dau_am_cuoi(double *b, int &m){
    bool check = false;
    int k = m-1;
    while(k >= 0 && check==false){
        if (*(b+k) < 0){
            check = true;
            cout << "Da xoa phan tu cuoi " << *(b+k) << " khoi mang b : ";
            for(int j=k;j<m-1;j++){
                *(b+j) = *(b+j+1);
            }
            m--; 
            for(int i=0;i<m;i++) cout << *(b+i) << " ";
            cout << endl;
        } else k--;
    }
    if (check == false) cout << "Khong co so am trong mang b" << endl;
}

int tong_lon_25(double *a, int n) {
    double P = 0;
    int so_phan_tu = 0;
    for (int i = n - 1; i >= 0; i--) {
        P += *(a + i);
        so_phan_tu++;
        if (P > 25) return so_phan_tu;
    }
    return 0;
}

bool kiem_tra_hop_le(double *a, int n){
    for(int i=0;i<n-2;i++){
        if (*(a+i) >= 10 && *(a+i) <= 20){
            if (*(a+i+1) >= 10 && *(a+i+1) <= 20){
                if (*(a+i+2) >= 10 && *(a+i+2) <= 20){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    double *a, *b; int n,m;
    cout << "Nhap so nguyen n : "; cin >> n;
    a = new double[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    cout << "Nhap so nguyen m : "; cin >> m;
    b = new double[m];
    cout << "Nhap lan luot " << m << " phan tu cua mang b cach nhau boi dau cach : ";
    for(int i=0;i<m;i++) cin >> *(b+i);
    sap_xep_tang_dan(a,n);
    cout << "Mang a da sap xep : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    cout << endl << "Mang b : ";
    for(int i=0;i<m;i++) cout << *(b+i) << " ";
    luu_file(a,b,n,m,"D:\\kq.txt");
    cout << endl << "Luu file tai : D:\\kq.txt" << endl;
    xoa_dau_am_cuoi(b,m);
    bool check_hop_le = kiem_tra_hop_le(a,n);
    if (check_hop_le) cout << "Mang a hop le" << endl;
    else cout << "Mang a khong hop le" << endl;
    cout << "So phan tu can lay it nhat cua mang a de tong cua chung lon hon 25 : " << tong_lon_25(a,n);
    delete[] a; delete[] b;
}