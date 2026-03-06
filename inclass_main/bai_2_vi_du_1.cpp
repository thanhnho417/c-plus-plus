#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if (n % 2 == 0)
        cout << "n la so chan";
    else
    {
        cout << "n la so le" << endl;
        n *= 2;
        cout << n;
    }
    return 0;
}