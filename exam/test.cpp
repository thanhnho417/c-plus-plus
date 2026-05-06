#include <iostream>
using namespace std;

int main(){
    int a[10] = {3,2,9,5,1,4,0,7,4,6};
    int *b = a+5;
    cout << *b << endl;
    *b += 2;
    cout << *b << endl;
}