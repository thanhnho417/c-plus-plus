#include <iostream>
using namespace std;

int main(){
    long long m,n;
    do {
        cout << "Nhap so doi bong : ";
        cin >> n;
    } while(n<=0);
    do {
        cout << "Nhap so tran ma moi doi thi dau : ";
        cin >> m;
    } while (m<=0);
    long long a[n][m], diem[n] = {0}, thang_bat_bai[n] = {0};
    for(long long i=0;i<n;i++){
        cout << "Nhap " << m << " diem cua " << m << " tran cua doi " << i+1 << " cach nhau boi dau cach : ";
        for(long long j=0;j<m;j++) {cin >> a[i][j]; diem[i]+=a[i][j];}
    }
    cout << endl;
    long long k=0;
    for(long long i=0;i<n;i++){
        long long check = 0;
        for(long long j=0;j<n;j++){
            if(a[i][j] == 0) check++;
        }
        if(check==0) {thang_bat_bai[k] = i+1; k++;}
    }
    if (k==0){
        cout << "Khong co doi nao bat bai" << endl;
    } else {
        cout << "Doi bong bat bai : Doi ";
        for(long long i=0;i<k;i++){
            cout << thang_bat_bai[i] << ", ";
        }
    }
    cout << endl;
    long long max = 0;
    for(long long i=0;i<n;i++){
        if(diem[i] > max) max = diem[i];
    }
    cout << "Doi co diem cao nhat : Doi ";
    for(long long i=0;i<n;i++){
        if(diem[i] == max) cout << i+1 << ", ";
    }

}