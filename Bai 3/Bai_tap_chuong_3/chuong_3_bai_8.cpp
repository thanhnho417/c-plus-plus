#include <iostream>
using namespace std;

void nhapsonguyenduong(long long &n, char k)
{
    cout << "Nhap so nguyen duong " << k << " > 10 : ";
    cin >> n;
    while (cin.fail() || n <= 10)
    {
        cout << "Nhap lai so nguyen duong " << k << " > 10 : ";
        cin >> n;
    }
}

void phantichthuasonguyento(long long n)
{
    bool check = true;
    long long i = 2, T = n;
    cout << n << " = " ;
    while (i <= T)
    {
        if (T % i == 0)
        {
            if (check)
            {
                check = false;
                cout << i;
            }
            else {
                cout << " x " << i;
            }
            T/=i;
        }
        else i+=1;
    }
}

int main()
{
    long long n;
    nhapsonguyenduong(n, 'n');
    phantichthuasonguyento(n);
    return 0;
}