#include <iostream>
#include <string>

using namespace std;

void printBox(const string& name, const string& nim, const string& otherInfo) {
    int width = 50;  // Lebar kotak
    int padding = 2; // Spasi di dalam kotak
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
    string otherInfo = "Program Mencari Bentuk Segitiga";

    printBox(name, nim, otherInfo);

    int A, B, C;

   
    cin >> A >> B >> C;
    cout << "SISI 1: " << A << endl;
    cout << "SISI 2: " << B << endl;
    cout << "SISI 3: " << C << endl;

    if (A == B) {
        if (B == C) {
            cout << "SAMA SISI" << endl; // ketika A=B=C
        } else {
            cout << "SAMA KAKI" << endl; // ketika hanya ada 2 saja yang sama
        }
    } else if (A == C) {
        cout << "SAMA KAKI" << endl; // ketika hanya ada 2 saja yang sama
    } else if (B == C) {
        cout << "SAMA KAKI" << endl; // ketika hanya ada 2 saja yang sama
    } else {
        cout << "SEMBARANG" << endl; // ketika tidak ada yang sama
    }

    return 0;
}


//running project menggunakan vs code 
//g++ -std=c++17 -o main bagiandua.cpp && ./main