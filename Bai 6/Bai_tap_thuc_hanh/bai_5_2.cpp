#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void tao_tep(string ten_file, string noi_dung){
    ofstream fout(ten_file);
    if(!fout.is_open()){
        cout << "Loi mo file"; return;
    }
    fout << noi_dung << endl;
    fout.close();
}

int main()
{
    string FILE1 = "7 2 \n1 2 3 1 \n2 2 4 1 \n3 3 5 1";
    string FILE2 = "4 1 1 2 \n5 2 2 2 \n6 3 3 2 \n7 4 4 2";
    tao_tep("FILE1.txt", FILE1);
    tao_tep("FILE2.txt", FILE2);
    ofstream fout3("FILE3.txt");
    ifstream fout1("FILE1.txt");
    ifstream fout2("FILE2.txt");
    string file_1, file_2;
    while(getline(fout1, file_1)){
        fout3 << file_1 << endl;
        cout << file_1 << endl;
    }
    while(getline(fout2, file_2)){
        fout3 << file_2 << endl;
        cout << file_2 << endl;
    }
    fout1.close(); fout2.close(); fout3.close();
    return 0;
}