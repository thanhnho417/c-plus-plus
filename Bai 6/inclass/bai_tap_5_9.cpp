#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream file("data.txt");
    if (!file.is_open()) {
        cout << "Khong the mo tep!" << endl;
        return 1;
    }
    int n, m;
    file >> n >> m;
    float **a = new float*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new float[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            file >> a[i][j];
        }
    }
    file.close();
    cout << fixed << setprecision(2);
    cout << "Trung binh cong tung cot:" << endl;
    
    for (int j = 0; j < m; j++) {
        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        float average = sum / n;
        cout << "Cot " << j + 1 << ": " << average << endl;
    }
    for (int i = 0; i < n; i++) delete[] a[i];
    delete[] a;

    return 0;
}