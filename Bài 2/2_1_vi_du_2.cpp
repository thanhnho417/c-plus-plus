#include <iostream>
using namespace std;

int main(){
    int i, x[] = {1,4,5,7,3,2};
    int n = sizeof(x)/sizeof(int);
    for (i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    for(i=0; i < n/2; i++) {
        int bien_hd_1 = x[i];
        int bien_hd_2 = x[n-i-1];
        x[i] = bien_hd_2;
        x[n-i-1] = bien_hd_1;
    }
    for (i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    return 0;
}