#include <iostream>
#include <cstring>
using namespace std;

void deleteall(char S[], char k){
    for(int i=0;i<strlen(S);i++){
        while (S[i] == k){
            for(long long j=i;j<strlen(S);j++){
                S[j] = S[j+1];
            }
        }
    }
}

int main(){
    char S[300]; char k;
    cout << "Nhap ki tu : ";
    gets(S);
    cout << "Nhap ki tu tim kiem : ";
    cin >> k;
    deleteall(S,k);
    cout << "Ket qua : " << S;
}