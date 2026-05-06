#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char S[300];
    cout << "Nhap xau : ";
    fgets(S, sizeof(S), stdin);
    int ngoac_trai = 0, ngoac_phai = 0;
    for(int i=0;i<strlen(S);i++){
        if (S[i]=='(') ngoac_trai++;
        else if (S[i]==')') ngoac_phai++;
    }
    if (ngoac_trai == ngoac_phai) cout << "Xau hop le";
    else cout << "Xau khong hop le";
}