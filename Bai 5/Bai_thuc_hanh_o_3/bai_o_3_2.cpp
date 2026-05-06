#include <iostream>
#include <cstring>
using namespace std;

bool check_sentence(char S[])
{
    long long dem = 0;
    if (S[0] == ' ' && S[1] == S[0])
        return false;
    for (long long i = 0; i < strlen(S); i++)
    {
        if (S[i] == ' ')
        {
            if (S[i + 1] == S[i])
            {
                return false;
            }
            else
                dem++;
        }
    }
    dem++;
    if (dem > 10)
        return false;
    return true;
}

int main()
{
    char S[50];
    cout << "Nhap xau : ";
    fgets(S, sizeof(S), stdin);
    if (check_sentence(S))
    {
        cout << "Xau hop le";
    }
    else
    {
        cout << "Xau khong hop le";
    }
}