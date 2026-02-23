#include <iostream>
using namespace std;

int main(){
    double sinx, x, e = 0.00001;
    cout << "Nhap so thuc x (rad): ";
    cin >> x;
    sinx = x;
    double tu_so = x, mau_so = 1, so_hang_cong_vao, check, n = 1, c = 1;
    while(true){
        c*=-1;
        tu_so*=x*x;
        mau_so*=(n+1)*(n+2);
        so_hang_cong_vao = (double)c*((tu_so)/mau_so);
        sinx += so_hang_cong_vao;
        n+=2;
        if(so_hang_cong_vao < 0) so_hang_cong_vao*=-1;
        if(so_hang_cong_vao < e) break;
    }
    cout << "Ket qua : " << sinx << endl;
    return 0;
}