#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x = 0;
    do {x += 1;}
    while (x <= 5 || sin(x) != 1);
    cout << x;
    return 0;
}