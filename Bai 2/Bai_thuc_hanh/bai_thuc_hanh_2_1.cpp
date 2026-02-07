#include <iostream>
using namespace std;

int main(){
    int sotien;
    cout << "Nhap so tien phai tra : ";
    cin >> sotien;
    if(sotien >= 200 && sotien < 300) cout << "So tien khuyen mai : " << (float)sotien*0.2;
    else if(sotien >= 300) cout << "So tien khuyen mai: " << (float)sotien*0.3;
    else cout << "So tien khuyen mai : 0";
    return 0;
}