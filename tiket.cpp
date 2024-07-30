#include <iostream>
#include <cmath>
using namespace std;

//Fungsi menghitung biaya tiket
double hitungBiayaTiket(int jumlahStasiun) {
    //Tarif per stasiun
    const double tarifPerStasiun = 5000.0;
    
    //Menghitung total biaya
    double totalBiaya = jumlahStasiun * tarifPerStasiun;
    
    return totalBiaya;
}

// Fungsi memeriksa validitas stasiun
bool validStasiun(int stasiun) {
    return stasiun >= 1 && stasiun <= 5;
}

int main() {
    int stasiunAwal, stasiunTujuan;

    //pesan selamat datang
    cout << "=====================================" << endl;
    cout << "Selamat Datang di stasiun Indonesia" << endl;
    cout << "Silahkan pilih tujuan anda" << endl;
    cout << "=====================================" << endl;
    cout << "*Tarif Per-Stasiun adalah Rp5000" << endl;
    //menu
    cout << "1. Stasiun Banjarmasin" << endl;
    cout << "2. Stasiun Banjarbaru" << endl;
    cout << "3. Stasiun Martapura" << endl;
    cout << "4. Stasiun Kandangan" << endl;
    cout << "5. Stasiun Kotabaru" << endl;

    cout << endl;

    //perulangan stasiun awal
    do {
        cout << "Stasiun awal: ";
        cin >> stasiunAwal;
        
        if (!validStasiun(stasiunAwal)) {
            cout << "Stasiun yang anda pilih tidak ada. Silakan coba lagi." << endl;
        }
    } while (!validStasiun(stasiunAwal));

    // perulangan stasiun tujuan
    do {
        cout << "Stasiun tujuan: ";
        cin >> stasiunTujuan;
        
        if (!validStasiun(stasiunTujuan)) {
            cout << "Stasiun yang anda tuju tidak ada. Silakan coba lagi." << endl;
        }
    } while (!validStasiun(stasiunTujuan));

    // perhitungan
    int jumlahStasiun = abs(stasiunTujuan - stasiunAwal) + 1;
    
    double biayaTiket = hitungBiayaTiket(jumlahStasiun);
    
    cout << "Biaya tiket dari stasiun " << stasiunAwal << " ke stasiun " << stasiunTujuan << " adalah: Rp" << biayaTiket << endl;

    //finish
    cout << "Terima kasih telah menggunakan layanan kami!" << endl;
    
    return 0;
}