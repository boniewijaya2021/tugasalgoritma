#include <iostream>

using namespace std;

int main() {
    // Waktu Berangkat
    int jamBerangkat = 8;
    int menitBerangkat = 52;
    int detikBerangkat = 45;

    // Waktu tiba
    int jamTiba = 12;
    int menitTiba = 15;
    int detikTiba = 10;

    // Konversi waktu menjadi detik
    int totalDetikBerangkat = (jamBerangkat * 3600) + (menitBerangkat * 60) + detikBerangkat;
    int totalDetikTiba = (jamTiba * 3600) + (menitTiba * 60) + detikTiba;

    // Hitung selisih menjadi detik
    int selisihDetik = totalDetikTiba - totalDetikBerangkat;

    // sehubungan 1 hari adalah 24 , maka mesti di pastikan selisih 24 jam nya
    if (selisihDetik < 0) {
        selisihDetik += 86400; // 24 jam dalam detik
    }

    // Konversi kembali menjadi jam
    int jamPerjalanan = selisihDetik / 3600;
    int menitPerjalanan = (selisihDetik % 3600) / 60;
    int detikPerjalanan = selisihDetik % 60;

    // Tampilkan hasil
    cout << "Waktu perjalanan: " 
         << jamPerjalanan << " jam, " 
         << menitPerjalanan << " menit, " 
         << detikPerjalanan << " detik." << endl;

    return 0;
}


//running project menggunakan vs code 
//g++ -std=c++17 -o main tugasbagian2.cpp && ./main