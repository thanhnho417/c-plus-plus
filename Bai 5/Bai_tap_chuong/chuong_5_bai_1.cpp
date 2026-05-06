#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char str1[300], str2[300];
    cout << "Nhap xau str1 : ";
    fgets(str1, sizeof(str1), stdin);
    cout << "Nhap xau str1 : ";
    fgets(str2, sizeof(str2), stdin);
    cout << "Neu phan biet chu hoa chu thuong thi ";
    if (strcmp(str1, str2) == 0) cout << "str1 bang str2";
    else cout << "str1 khong bang str2";
    cout << endl;
    char str1_lower[300], str2_lower[300];
    for(int i=0;i<strlen(str1);i++){
        if (isupper(str1[i])){
            str1_lower[i] = tolower(str1[i]);
        } else {
            str1_lower[i] = str1[i];
        }
    }
    str1_lower[strlen(str1)] = '\n';
    for(int i=0;i<strlen(str2);i++){
        if (isupper(str2[i])){
            str2_lower[i] = tolower(str2[i]);
        } else {
            str2_lower[i] = str2[i];
        }
    }
    str2_lower[strlen(str2)] = '\n';
    cout << "Neu khong phan biet chu hoa chu thuong thì ";
    if(strcmp(str1_lower, str2_lower) == 0) cout << "str1 bang str2";
    else cout << "str1 khong bang str2";
    char str1_3[3], str2_3[3];
    for(int i=0;i<3;i++){
        str1_3[i] = str1[i];
        str2_3[i] = str2[i];
    }
    cout << endl;
    cout << "Neu chi tinh 3 ki tu dau tien thi ";
    if (strncmp(str1, str2, 3) == 0) cout << "str1 bang str2";
    else cout << "str1 khong bang str2";
}