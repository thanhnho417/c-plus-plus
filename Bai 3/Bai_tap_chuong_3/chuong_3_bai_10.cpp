#include <iostream>
using namespace std;

long long ngayduathu(long long n)
{
    if (n <= 0)
        return 0;
    long long dem = 0, T = n;
    while (T > 0)
    {
        dem += 1;
        T = T - T/2;
        if(T == 0) break;
        if(T == 1){
            dem+=1;
            break;
        }
    }
    return dem;
}

int main()
{
    long long n;
    cout << "Nhap so thu : ";
    cin >> n;
    cout << "So ngay gui thu : " << ngayduathu(n);
    return 0;
}