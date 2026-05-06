#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("DATHUC.txt");
    int n;
    cout << "Nhap so nguyen n : "; cin >> n;
    fout << n << endl;
    double *a = new double[n];
    cout << "Nhap lan luot " << n << " phan tu cua mang a cach nhau boi dau cach : " << endl;
    for(int i=0;i<n;i++) {cin >> *(a+i); fout << *(a+i) << " ";}
    fout << endl;
    for(int i=0;i<n;i++){
        if (n-i==1) fout << *(a+i) << "x" << i << " ";
        else fout << *(a+i) << " x" << i << " + ";
    }
    fout.close();
    ifstream fout3("DATHUC.txt");
    if(!fout3.is_open()) cout << "Khong the mo file";
    else {
        string word;
        while(getline(fout3, word)){
            cout << word << endl;
        }
    }
    fout3.close();
}