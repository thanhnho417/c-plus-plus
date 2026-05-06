#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
    int duc = 0, i = 0;
    while (i < n)
    {
        if (a[i] % 2 == 0)
        {
            duc++;
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }
    a = (int *)realloc(a, (n) * sizeof(int));
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
            cout << *(a + i) << " ";
    }
    else
    {
        cout << "Mang rong sau khi xoa chan!";
        free(a);
    }
}