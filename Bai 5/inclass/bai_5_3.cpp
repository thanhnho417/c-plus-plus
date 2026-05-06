#include <iostream>
#include <cstring>
using namespace std;

bool ngoachople(char S[]){
    int ngoac_trai = 0, ngoac_phai = 0;
    for(int i=0;i<strlen(S);i++){
        if(S[i] == '(') ngoac_trai++;
        else if (S[i] == ')') ngoac_phai++;
    }
    if (ngoac_trai == ngoac_phai) return true;
    else return false;
}

int main(){
    char S[300];
    cout << "Nhap ki tu : ";
    gets(S);
    bool check = ngoachople(S);
    if(check) cout << "Bieu thuc hop le";
    else cout << "Bieu thuc khong hop le";
}