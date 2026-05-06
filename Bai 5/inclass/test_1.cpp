#include <iostream>
#include <stdlib.h>
using namespace std;

int cong(int x, int y){
    return x+y;
}

int tru(int x, int y){
    return x-y;
}
int tinhtoan(int x, int y, int (*p)(int, int)){
    return (*p)(x,y);
}
int main(){
    int m = tinhtoan(7,5, cong);
    int n = tinhtoan(2,9,tru);
    cout << n << ", " << m;
}