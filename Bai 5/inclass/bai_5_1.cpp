#include <iostream>
#include <cstring>
using namespace std;

int countword(char S[]){
    int d = 0;
    for(int i=0;i<strlen(S)-1;i++){
        if(S[i] == ' ' & S[i+1] != S[i]){
            d++;
        }
    }
    if (S[0] != ' '){
        d++;
    }
    return d;
}

int main(){
    char S[300];
    cout << "Nhap ki tu : ";
    gets(S);
    int d = countword(S);
    cout << "Ket qua : " << d << " tu.";
    return 0;

}