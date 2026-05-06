#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char *S = new char[80];
    cout << "Nhap xau : ";
    fgets(S, 80, stdin);
    S[strcspn(S,"\n")] = 0;
    int len = strlen(S);
    cout << "Chuoi vua nhap : ";
    for (int i = 0; i < len; i++)
        cout << *(S + i);
    cout << endl;
    for(int i=0;i<len;i++){
        if(islower(*(S+i))){
            *(S+i) = toupper(*(S+i));
        }
    }
    cout << "Xau sau khi thay the chu thuong thanh chu hoa : ";
    for(int i=0;i<len;i++) cout << *(S+i);
    cout << endl;
    int so_so_nguyen = 0, count = 0;
    while(count < len){
        if(isdigit(*(S+count))){
            so_so_nguyen++;
            int k = count+1;
            while(k < len && isdigit(*(S+k))) k++;
            count = k;
        } else count++;
    }
    cout << "So so nguyen trong chuoi : " << so_so_nguyen;
    delete[] S;
}