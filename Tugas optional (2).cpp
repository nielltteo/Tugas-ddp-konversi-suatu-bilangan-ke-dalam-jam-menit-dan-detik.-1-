#include <iostream>

using namespace std;

int main() {
    int total_detik, hari, jam, menit, detik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << ">>";
    cin >> total_detik;
    
    hari = total_detik / 86400;
    int sisa_hari = total_detik % 86400;   
    jam = sisa_hari / 3600;       
    int sisa_jam = sisa_hari % 3600;

    menit = sisa_jam / 60;   
    detik = sisa_jam % 60;
    cout << "Hasil Konversi:" << endl;
    cout << total_detik << " detik = " << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}

