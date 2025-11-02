#include <iostream>

using namespace std;

int main() {
    int total_detik, jam, menit, detik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << ">>";
    cin >> total_detik;
    
    // Hitung jam
    jam = total_detik / 3600;
    
    // Hitung sisa detik setelah jam
    int sisa = total_detik % 3600;
    
    // Hitung menit dari sisa
    menit = sisa / 60;
    
    // Hitung detik dari sisa
    detik = sisa % 60;
    
    // Output hasil konversi
    cout << "Hasil Konversi:" << endl;
    cout << total_detik << " detik = " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}

