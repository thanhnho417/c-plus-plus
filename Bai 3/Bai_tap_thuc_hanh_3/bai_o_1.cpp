#include <iostream>
using namespace std;

long long gt(long long n)
{
    if (n == 1)
        return n;
    else
        return n * gt(n - 1);
}

int main()
{
    long long a, b;
    double S;
    cout << "Nhap cac gia tri a,b cach nhau boi dau cach : ";
    cin >> a >> b;
    S = (double)(gt(a) + gt(b)) / gt(a + b);
    cout << "Ket qua : " << S;
    return 0;
}