#include <iostream>
using namespace std;

int main(){
    long long a = 1;
    do{
        cout << "Voi a = " << a <<", ket qua la : " << a*a << endl; 
        a += 1;
    }
    while(a*a <1000);
    cout << "Voi a = " << a << ", ket qua la : " << a*a << endl;
    return 0;
}