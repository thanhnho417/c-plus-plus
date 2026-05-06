#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("MATRIX.txt");
    int n,m;
    cout << "Nhap so nguyen n,m cach nhau boi dau cach : ";
    cin >> n >> m;
    int a[n][m] = {0};
    fout << n << " " << m << endl;
    for(int i=0;i<n;i++){
        cout << "Nhap lan luot " << m << " phan tu cua dong thu " << i+1 << " cach nhau boi dau cach : " << endl;
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            fout << a[i][j] << " ";
        }
        fout << endl; cout << endl;
    }
    
    fout.close();
    ifstream matrix("MATRIX.txt");
    if(!matrix.is_open()){
        cout << "Khong the mo file!" << endl;
    } else {
        string word;
        while(getline(matrix, word)){
            cout << word << endl;
        }
    }
    matrix.close();
}