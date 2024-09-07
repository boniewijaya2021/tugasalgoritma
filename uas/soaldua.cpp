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
    string otherInfo = "UAS Soal No 2";

    printBox(name, nim, otherInfo);

    // Target jarak
    const double jarak_total = 1000.0; // dalam meter
    const double kecepatan_awal_ali = 2.0; // m/s
    const double kenaikan_kecepatan_ali = 0.1; // m/s setiap detik
    const double kecepatan_badu = 3.0; // m/s
    const int t_badu_mulai = 10; // detik setelah Ali

    double posisi_ali = 0;
    double posisi_badu = jarak_total;
    int detik = 0;

    while (posisi_ali < posisi_badu) {
        // Hitung posisi Ali
        double kecepatan_ali = kecepatan_awal_ali + detik * kenaikan_kecepatan_ali;
        posisi_ali += kecepatan_ali;

        // Hitung posisi Badu (hanya setelah 10 detik Ali berangkat)
        if (detik >= t_badu_mulai) {
            posisi_badu -= kecepatan_badu;
        }

        // Periksa apakah mereka berpapasan
        if (posisi_ali >= posisi_badu) {
            break;
        }

        detik++;
    }

    // Menampilkan hasil
    cout << "Ali dan Badu berpapasan pada detik ke-" << detik << " setelah pukul 8." << endl;
    cout << "Jarak Badu dengan titik B setelah berpapasan: " << posisi_badu << " meter" << endl;

    return 0;
}



//running project menggunakan vs code 
//g++ -std=c++17 -o main soaldua.cpp && ./main
//url git : https://github.com/boniewijaya2021/tugasalgoritma