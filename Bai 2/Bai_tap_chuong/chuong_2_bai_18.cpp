#include <iostream>
using namespace std;

int main(){
    long long n = 3;
    while(((1+n)*n)/2 <=1000){
        cout << "n = " << n << " thi ket qua la : " << ((1+n)*n)/2 << endl;
        n+=1;
    }
    cout << "Ket qua : " << n;
    return 0;
}