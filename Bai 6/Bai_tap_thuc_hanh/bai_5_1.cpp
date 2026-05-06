#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    ifstream f("FISTFILE.txt");
    string word;
    if (!f.is_open()){
        cout << "Khong the mo file"; return 1;
    }
    while(getline(f, word)){
        cout << word << endl;
    }
    f.close();
    return 0;
}