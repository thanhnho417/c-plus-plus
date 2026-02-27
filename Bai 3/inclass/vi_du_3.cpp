#include <iostream>
#include <cmath>
using namespace std;

float chuvi(float a, float b, float c){
    return a+b+c;
}
float dientich(float a, float b, float c){
    float p = (float)(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    float a,b,c;
    cout << "Nhap cac gia trị a,b,c cach nhau boi dau cach : ";
    cin >> a >> b >> c;
    float cv = chuvi(a,b,c);
    float dt = dientich(a,b,c);
    cout << "Chu vi : " << cv << endl;
    cout << "Dien tich : " << dt << endl;
    return 0;
}