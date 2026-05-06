#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int *a = (int*) calloc(n, sizeof(int));
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    int m = n;
    for(int i=0;i<m;i++){
        if (*(a+i)%2==0){
            a = (int*) realloc(a, (n+1)*sizeof(int));
            *(a+n) = *(a+i);
            n++;
        }
    }
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    free(a);
}