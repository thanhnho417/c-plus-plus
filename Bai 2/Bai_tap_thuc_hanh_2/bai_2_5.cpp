#include <iostream>
using namespace std;

int main()
{
    long S = 0, n, b = 0;
    cout << "Nhap so dien tieu thu : ";
    cin >> n;
    if (n - 100 <= 0)
    {
        b = 750 * n;
        S += b;
    }
    else
    {
        S += 750 * 100;
        n -= 100;
        if (n - 100 <= 0)
        {
            b = 1250 * n;
            S += b;
        }
        else {
            S+= 1250*100;
            n-=100;
            if (n-100<=0){
                b = 1750*n;
                S+=b;
            } else {
                S+=100*1750;
                n-=100;
                S+=n*3000;
            }
        }
    }
    cout << "So tien phai tra : " << S;
    return 0;
}