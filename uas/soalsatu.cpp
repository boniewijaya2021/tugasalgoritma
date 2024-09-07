#include <iostream>
#include <iomanip> // Untuk setw dan setfill

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
    string otherInfo = "UAS Soal No 1";

    printBox(name, nim, otherInfo);

    // Target jarak 1000 m
    const double jarak_total = 1000.0; // dalam meter
    const double kecepatan_awal_ali = 2.0; // m/s
    const double kenaikan_kecepatan_ali = 0.1; // m/s setiap 10 detik
    const double kecepatan_badu = 3.0; // m/s
    const int interval = 10; // detik
    const int t_badu_mulai = 60; // detik setelah Ali
    
    double waktu_ali = 0; // waktu Ali sudah bergerak dalam detik
    double waktu_badu = t_badu_mulai; // waktu Badu sudah bergerak dalam detik
    double jarak_ali = 0;
    double jarak_badu = 0;
    
    while (jarak_badu <= jarak_ali) {
        // Update jarak Ali setiap interval
        waktu_ali += interval;
        double kecepatan_ali = kecepatan_awal_ali + (waktu_ali / interval) * kenaikan_kecepatan_ali;
        jarak_ali += kecepatan_ali * interval;
        
        // Update jarak Badu
        waktu_badu += interval;
        jarak_badu = kecepatan_badu * (waktu_badu - t_badu_mulai);
        
        // Cek apakah Badu sudah mendahului Ali
        if (jarak_badu > jarak_ali) {
            break;
        }
    }
    
    // Menghitung waktu Badu mendahului Ali
    int detik_mendahului = static_cast<int>(waktu_badu);
    int jam = 8;
    int menit = detik_mendahului / 60;
    int detik = detik_mendahului % 60;
    menit += 1; // karena Badu berangkat 1 menit setelah Ali
    
    if (menit >= 60) {
        menit -= 60;
        jam += 1;
    }

    // Menampilkan hasil
    cout << "Badu akan mendahului Ali pada pukul ";
    
    // Menampilkan jam dengan 2 digit
    if (jam < 10) cout << '0';
    cout << jam << ":";
    
    // Menampilkan menit dengan 2 digit
    if (menit < 10) cout << '0';
    cout << menit << ":";
    
    // Menampilkan detik dengan 2 digit
    if (detik < 10) cout << '0';
    cout << detik << endl;

    return 0;
}


//running project menggunakan vs code 
//g++ -std=c++17 -o main soalsatu.cpp && ./main
//url git : https://github.com/boniewijaya2021/tugasalgoritma