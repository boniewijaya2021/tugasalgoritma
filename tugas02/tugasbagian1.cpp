#include <iostream>

using namespace std;

int main() {
    // Waktu berangkat
    int jamBerangkat = 8;
    int menitBerangkat = 52;
    int detikBerangkat = 45;

    // waktu tempuh
    int durasi = 5000;

    // rubah dulu jam ke detik
    //3600 jam ke detik 
    //60 menit ke detik
    int totalDetik = (jamBerangkat * 3600) + (menitBerangkat * 60) + detikBerangkat;

    // Total detik Setelah Perjalanan
    int totalDetikSeluruhnya = totalDetik + durasi;

    // Rubah total detik ke jam
    int jamTiba = (totalDetikSeluruhnya / 3600) % 24; // % 24 untuk menangani jika waktu melebihi 24 jam
    int menitTiba = (totalDetik % 3600) / 60;
    int detikTiba = totalDetik % 60;

    // Jam tiba ditujuan
    cout << "Waktu tiba: " << jamTiba << " : " << menitTiba << " : " << detikTiba << endl;

    return 0;
}


//running project menggunakan vs code 
//g++ -std=c++17 -o main tugasbagian1.cpp && ./main