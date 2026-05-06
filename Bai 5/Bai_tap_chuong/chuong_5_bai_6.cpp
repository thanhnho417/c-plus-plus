#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    string S;
    cout << "Nhap doan van ban : ";
    getline(cin, S);
    int k = S.length();
    while (S[0] == ' '){
        for(int i=0;i<k-1;i++){
            S[i] = S[i+1];
        }
        k--;
    }
    while(S[k-1] == ' ') k--;
    int i = 0;
    while (i<k-1){
        if (S[i] == ' ' && (S[i+1] == S[i] || S[i+1] == ',' || S[i+1] == '.')){
            for(int j=i;j<k-1;j++){
                S[j] = S[j+1];
            }
            k--;
        } else i++;
    }
    S.resize(k);
    if(!S.empty()){
        S[0] = toupper(S[0]);
    }
    for(int i=1;i<k;i++){
        S[i] = tolower(S[i]);
    }
    for(int i=i;i<k-2;i++){
        if (S[i] == '.' && S[i+1] == ' ' && islower(S[i+2])) S[i+2] = toupper(S[i+2]);
    }
    cout << S;
}