#include <iostream>
using namespace std;

void sap_xep_mang_nguyen(long long a[], long long n, char k)
{
    if (k == '<')
    {
        for (long long i = 0; i < n; i++)
        {
            long long tg = a[i], j = i - 1;
            while (j >= 0 && a[j] < tg)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tg;
        }
    }
    else if (k == '>')
    {
        for (long long i = 0; i < n; i++)
        {
            long long tg = a[i], j = i - 1;
            while (j >= 0 && a[j] < tg)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tg;
        }
    }
}

int main()
{
    long long n;
    cout << "Nha so nguyen n (1<=n<=30): ";
    cin >> n;
    while (n < 1 || n > 30)
    {
        cout << "Nhap lai so nguyen n (1<=n<=30) : ";
        cin >> n;
    }
    long long a[n];
    cout << "Nhap " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    long long chan = 0, le = 0;
    cout << endl
         << "Cac so chan chia het cho 3 : \n";
    for (long long i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i]%2 == 0)
            cout << a[i] << ". Vi tri thu : " << i + 1 << endl;
        if (a[i] % 2 == 0)
            chan++;
        if (a[i] % 2 != 0)
            le++;
    }
    for(long long i=0;i<n;i++){
        for(long long j=i+1;j<n;j++){
            bool check = false;
            if (a[i]%2!=0 && a[j]%2==0){
                long long tg = a[i]; a[i] = a[j]; a[j] = tg;
            }
            if (a[i]%2!=0 && a[j]%2!=0) check = true;
            if (a[i]%2==0 && a[j]%2==0) check = true;
        }
    }
    cout << endl;
    long long mang_chan[chan], mang_le[le];
    for (long long i=0;i<n;i++) cout << a[i] << " ";
    cout << endl << endl;
    for(long long i=0;i<chan;i++) mang_chan[i] = a[i];
    for(long long i=0;i<le;i++) mang_le[i] = a[i+chan];
    sap_xep_mang_nguyen(mang_chan,chan, '>');
    sap_xep_mang_nguyen(mang_le,le, '>');
    for (long long i=0;i<chan;i++) cout << mang_chan[i] << " ";
    for (long long i=0;i<le;i++) cout << mang_le[i] << " ";
    return 0;
}