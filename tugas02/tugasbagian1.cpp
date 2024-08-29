#include <iostream>

using namespace std;

int main() {
    // Waktu keberangkatan
    int jamBerangkat = 8;
    int menitBerangkat = 52;
    int detikBerangkat = 45;

    // Durasi perjalanan dalam detik
    int durasi = 5000;

    // Konversi waktu keberangkatan ke detik
    int totalDetikBerangkat = (jamBerangkat * 3600) + (menitBerangkat * 60) + detikBerangkat;

    // Total detik setelah ditambah durasi perjalanan
    int totalDetikTiba = totalDetikBerangkat + durasi;

    // Konversikan kembali ke format jam, menit, detik
    int jamTiba = (totalDetikTiba / 3600) % 24; // % 24 untuk menangani jika waktu melebihi 24 jam
    int menitTiba = (totalDetikTiba % 3600) / 60;
    int detikTiba = totalDetikTiba % 60;

    // Tampilkan waktu tiba
    cout << "Waktu tiba: " << jamTiba << " : " << menitTiba << " : " << detikTiba << endl;

    return 0;
}
