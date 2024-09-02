#include <iostream>
#include <string>

using namespace std;

void printBox(const string& name, const string& nim, const string& otherInfo) {
    int width = 50;  
    int padding = 2; 
    int contentWidth = width - 2 * padding - 2;

    // Baris atas kotak
    cout << "=" << string(width - 2, '=') << "=" << endl;

    // Isi kotak
    cout << "# " << string(padding, ' ') << "Nama: " << name << string(contentWidth - name.length() - 6, ' ') << " #" << endl;
    cout << "# " << string(padding, ' ') << "NIM: " << nim << string(contentWidth - nim.length() - 5, ' ') << " #" << endl;
    cout << "# " << string(padding, ' ') << otherInfo << string(contentWidth - otherInfo.length(), ' ') << " #" << endl;

    // Baris bawah kotak
    cout << "=" << string(width - 2, '=') << "=" << endl;
}

int main() {
    string name = "Bonie Wijaya";
    string nim = "2411600014";
    string otherInfo = "Program Mencari Angka Tengah";

    printBox(name, nim, otherInfo);

    int A, B, C;
    
     // Validasi untuk memastikan A, B, dan C berbeda
    do {   
        cin >> A >> B >> C;
        
        if (A == B || B == C || A == C) {
            cout << "Angka harus berbeda satu sama lain. Silakan coba lagi.\n";
        }
    } while (A == B || B == C || A == C);

    cout << "Angka 1: " << A << endl;
    cout << "Angka 2: " << B << endl;
    cout << "Angka 3: " << C << endl;

    if (A > B) {
        if (A < C) {
            cout << "Nilai tengah : " << A << endl; // ketika A > B dan A < C maka A adalah bilangan tengah
        } else if (B > C) {
            cout << "Nilai tengah : " << B << endl; // ketika A > B dan B > C maka B adalah bilangan tengah
        } else {
            cout << "Nilai tengah : " << C << endl; // ketika A > B dan C >= A maka C adalah bilangan tengah
        }
    } else {
        if (A > C) {
            cout << "Nilai tengah : " << A << endl; // ketika A < B dan A > C maka A adalah bilangan tengah
        } else if (B < C) {
            cout << "Nilai tengah : " << B << endl; // ketika A < B dan B < C maka B adalah bilangan tengah
        } else {
            cout << "Nilai tengah : " << C << endl; // ketika A < B dan C >= B maka C adalah bilangan tengah
        }
    }

    return 0;
}


//running project menggunakan vs code 
//g++ -std=c++17 -o main bagiansatu.cpp && ./main