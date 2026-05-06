#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string S;
    cout << "Nhap doan van ban : ";
    getline(cin, S);
    int so_tu = 0;
    for(int i=0;i<S.length();i++){
        if (S[i] == ' '){
            if (S[i+1] != S[i]) so_tu++;
        }
    }
    so_tu++;
    cout << "So tu trong doan van ban tren : " << so_tu;
}