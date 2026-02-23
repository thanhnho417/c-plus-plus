#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double e = 0.00001, cosx, x;
    cout << "Nhap so thuc x (rad) : ";
    cin >> x;
    cosx = 1;
    double tu_so = 1,mau_so = 1, n = 2, c = 1;
    cout << setprecision(6);
    while(true){
        tu_so*=x*x;
        mau_so*=(n-1)*n;
        c*=-1;
        double so_hang_them = c*(tu_so/mau_so);
        cosx += so_hang_them;
        n+=2;
        if(so_hang_them < 0) so_hang_them *=-1;
        if(so_hang_them < e) break;
    }
    cout << "Ket qua : " << cosx;
    return 0;
}