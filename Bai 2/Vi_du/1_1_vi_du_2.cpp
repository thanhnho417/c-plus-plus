#include <iostream>
using namespace std;

int main(){
    int gia_tien;
    cout << "Nhap gia tien : ";
    cin >> gia_tien;
    if (gia_tien > 300 && gia_tien <= 400){
        cout << "So tien khuyen mai : " << gia_tien*0.2;
    } else if (gia_tien > 400){
        cout << "So tien khuyen mai : " << gia_tien*0.3;
    } else {
        cout << "So tien khuyen mai : 0";
    }
    return 0;
}