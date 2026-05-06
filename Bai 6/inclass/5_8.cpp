#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    int n,m;
    cout << "Nhap so nguyen n, m : ";
    cin >> n >> m;
    float **b = new float*[n];
    for(int i=0;i<n;i++) *(b+i) = new float[m];
    for(int i=0;i<n;i++){
        cout << "Nhap " << m << " phan tu dong thu " << i+1 << " : ";
        for(int j=0;j<m;j++) cin >> b[i][j]; 
    }

    ofstream fout("DATA.txt", ios::out);
    fout << n << " " << m << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fout << b[i][j] << " ";
        }
        fout << endl;
    }
    fout.close();
    
    ifstream fin("data.txt", ios::in);
    char S[1000];
    while(!fin.eof()){
        fin.getline(S,1000);
        cout << S << endl;
    }
    fin.close();

    ifstream fin2("data.txt", ios::out);
    int p, q;
    fin2 >> p >> q;
    float **a = new float*[p];
    for(int i=0;i<p;i++) *(a+i) = new float[q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            fin2 >> a[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    fin2.close();
    delete[] a;
}