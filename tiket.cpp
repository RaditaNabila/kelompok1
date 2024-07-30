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