#include <iostream>
using namespace std;

void sap_xep_giam_dan(int *a, int n){
    for(int i=1;i<n;i++){
        int temp = *(a+i), j = i-1;
        while(j>=0 && (*(a+j) < temp)){
            *(a+j+1) = *(a+j);
            j--;
        }
        *(a+j+1) = temp;
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int *a = new int[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : ";
    for(int i=0;i<n;i++) cin >> *(a+i);
    cout << "Cac phan tu cua mang a : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    cout << endl;
    int max = *(a);
    for(int i=0;i<n;i++){
        if((*(a+i)%2==0) && (*(a+i)>max)) max = *(a+i);
    }
    if (max==0) cout << "Khong co so chan lon nhat" << endl;
    else cout << "So chan lon nhat trong mang : " << max << endl;
    sap_xep_giam_dan(a,n);
    cout << "Mang a sau khi xep giam dan : ";
    for(int i=0;i<n;i++) cout << *(a+i) << " ";
    delete[] a;
}