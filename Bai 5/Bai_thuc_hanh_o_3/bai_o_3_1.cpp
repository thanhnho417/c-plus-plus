#include <iostream>
#include <cstring>
using namespace std;

void dem_ki_tu_thuong(long long &ki_tu_thuong, char S[]){
    for(long long i=0;i<strlen(S);i++){
        long long num = (int)S[i];
        if(num >= 97 && num <=122) ki_tu_thuong++;
    }
}

void deleteachar(char S[], char k){
    for(long long i=0;i<strlen(S);i++){
        while(S[i] == k){
            for(long long j=i;j<strlen(S);j++){
                S[j] = S[j+1];
            }
        }
    }
}

int main(){
    char S[500];
    cout << "Nhap ki tu : ";
    fgets(S,sizeof(S),stdin);
    long long ki_tu_thuong = 0;
    dem_ki_tu_thuong(ki_tu_thuong, S);
    cout << endl << "So chu cai thuong : " << ki_tu_thuong << endl;
    deleteachar(S,'a');
    cout << endl << "Xau moi sau khi xoa phan tu 'a' : " << endl;
    for(long long i=0;i<strlen(S);i++){
        cout << S[i];
    }
}