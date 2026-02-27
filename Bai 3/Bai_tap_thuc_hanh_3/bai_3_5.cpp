#include <iostream>
using namespace std;

int heptbac2(double a, double b, double c, double d, double e, double f, double &x, double&y){
    double D = a*e-d*b;
    double Dx = b*f-e*c;
    double Dy = a*f-d*c;
    if(D==0){
        if(Dx==0 && Dy==0) return 1; else return 2;
    } else {
        x = Dx/D;
        y = Dy/D;
    }
    return 3;
}
int main(){
    double a,b,c,d,e,f,x,y;
    cout << "Nhap gia tri a,b,c,d,e,f cach nhau boi dau cach : ";
    cin >> a >> b >> c >> d >> e >> f;
    int T = heptbac2(a,b,c,d,e,f,x,y);
    if (T = 1) cout << "He phuong trinh co vo so nghiem" << endl;
    else if (T=2) cout << "he phuong trinh vo nghiem" << endl;
    else cout << "He phuong trinh co cap nghiem (x,y) = (" << x << "," << y << ")" << endl;
    return 0; 
}