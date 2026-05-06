#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void nhapkitu(char S[])
{
    cout << "Nhap xau : ";
    fgets(S, 100, stdin);
    S[strcspn(S, "\n")] = 0;
}

void thay_so_bang_chu(char n){
    switch(n){
        case '0': cout << "khong"; break;
        case '1': cout << "mot"; break;
        case '2': cout << "hai"; break;
        case '3': cout << "ba"; break;
        case '4': cout << "bon"; break;
        case '5': cout << "nam"; break;
        case '6': cout << "sau"; break;
        case '7': cout << "bay"; break;
        case '8': cout << "tam"; break;
        case '9': cout << "chin"; break;
    }
}

void demkitu(char S[], int &chu_so, int &chu_hoa, int &chu_thuong)
{
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        if (isdigit(S[i]))
            chu_so++;
        if (isalpha(S[i]))
        {
            if (isupper(S[i]))
                chu_hoa++;
            else if (islower(S[i]))
                chu_thuong++;
        }
    }
}

void tao_chuoi_nguoc(char S[], char A[])
{
    int len = strlen(S);
    for (int i = 0; i < strlen(S); i++)
    {
        A[i] = S[strlen(S) - 1 - i];
    }
    A[len] = '\0';
}

int main()
{
    char S[100];
    nhapkitu(S);
    int chu_so = 0, chu_thuong = 0, chu_hoa = 0;
    demkitu(S, chu_so, chu_hoa, chu_thuong);
    cout << "So chu thuong : " << chu_thuong << ", so chu hoa : " << chu_hoa << ", so chu so : " << chu_so;
    char A[100];
    tao_chuoi_nguoc(S, A);
    cout << endl << "Xau dao nguoc : ";
    for (int i = 0; i < strlen(A); i++)
    {
        cout << A[i];
    }
    cout << endl << "Xau khi thay so bang chu : ";
    for(int i=0;i<strlen(S);i++){
        if (isdigit(S[i])) thay_so_bang_chu(S[i]);
        else {
            cout << S[i];
        }
    }
}