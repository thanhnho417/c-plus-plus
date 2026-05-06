#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long m,n;
    do{
        cout << "Nhap so nguyen m (3 <= m <= 15) (dong) : ";
        cin >> m;
    } while (m<3 || m > 15);
    do{
        cout << "Nhap so nguyen n (1 <= n <= 15) (cot)  : ";
        cin >> n;
    } while (n<1 || n > 15);
    long long a[m][n], tong = m*n, t = 1;
    long long cot_trai = 0, cot_phai = n-1, dong_tren = 0, dong_duoi = m-1;
    while(t<=m*n){
        for(long long i=cot_trai;i<=cot_phai && t<=m*n;i++){ //Chạy từ trái sang phải, hoàn thành chỉ xuống hàng dưới cho lần sau
            a[dong_tren][i] = t;
            t++;
        }
        dong_tren++;
        for(long long i=dong_tren;i<=dong_duoi && t<=m*n;i++){ // Chạy từ trên xuống dưới, hoàn thành giảm số cột cho lần sau
            a[i][cot_phai] = t;
            t++;
        }
        cot_phai--;
        for(long long i=cot_phai;i>=cot_trai && t<=m*n;i--){ // Chạy từ phải sang trái, hoàn thành đẩy lên hàng trên cho lần sau
            a[dong_duoi][i] = t;
            t++;
        }
        dong_duoi--;
        for(long long i=dong_duoi;i>=dong_tren && t<=m*n;i--){ // Chạy từ dưới lên trên, hoàn thành đẩy lên hàng trên cho lần sau
            a[i][cot_trai] = t;
            t++; 
        }
        cot_trai++;
    }
    cout << endl << "Ma tran da nhap : " << endl;
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}