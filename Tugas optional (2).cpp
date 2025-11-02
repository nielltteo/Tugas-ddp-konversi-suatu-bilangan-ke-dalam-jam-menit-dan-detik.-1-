#include <iostream>

using namespace std;

int main() {
    int total_detik, hari, jam, menit, detik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << ">>";
    cin >> total_detik;
    
    // Hitung hari
    hari = total_detik / 86400;
    
    // Hitung sisa detik setelah hari
    int sisa_hari = total_detik % 86400;
    
    // Hitung jam dari sisa hari
    jam = sisa_hari / 3600;
    
    // Hitung sisa detik setelah jam
    int sisa_jam = sisa_hari % 3600;
    
    // Hitung menit dari sisa jam
    menit = sisa_jam / 60;
    
    // Hitung detik dari sisa jam
    detik = sisa_jam % 60;
    
    // Output hasil konversi
    cout << "Hasil Konversi:" << endl;
    cout << total_detik << " detik = " << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}


