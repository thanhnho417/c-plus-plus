#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double e = 0.00001, ex = 1, x;
    cout << "Nhap so thuc x : ";
    cin >> x;
    double tu_so = 1, mau_so = 1, n = 1;
    while(true){
        tu_so*=x;
        mau_so*=n;
        double check = tu_so/mau_so;
        n+=1;
        ex += check;
        if(check<0) check *=-1;
        if(check < e) break;
    }
    cout << setprecision(6) << fixed;
    cout << "Ket qua : " << ex;
    return 0;
}