#include <iostream>
using namespace std;

int main(){
    long x,y;
    cout << "Nhap hai so nguyen a,b cach nhau boi dau cach : ";
    cin >> x >> y;
    long a = max(x,y), b = min(x,y);
    while(a%b!=0){
        long r = a%b;
        a = b;
        b = r;
    }
    cout << "Uoc chung lon nhat cua a,b : " << b;
    return 0;
}