#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char S[80];
    cout << "Nhap xau : ";
    fgets(S, sizeof(S), stdin);
    char C; int k;
    cout << "Nhap ki tu C, so nguyen k cach nhau boi dau cach : ";
    cin >> C >> k;
    for(int i=strlen(S);i>=k;i--){
        S[i] = S[i-1];
    }
    S[k-1] = C;
    cout << "Hien thi : ";
    for(int i=0;i<strlen(S);i++){
        cout << S[i];
    }
}