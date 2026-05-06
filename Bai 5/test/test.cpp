#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void xuat_file(int* a, int n, const char* ten_tep){
    ofstream file_gi_do(ten_tep);
    file_gi_do << n << endl;
    for(int i=0;i<n;i++){
        file_gi_do << a[i] << " ";
    }
    file_gi_do.close();
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++) cin >> a[i];
    xuat_file(a, n, "D:\\tept.txt");
    delete[] a;
}