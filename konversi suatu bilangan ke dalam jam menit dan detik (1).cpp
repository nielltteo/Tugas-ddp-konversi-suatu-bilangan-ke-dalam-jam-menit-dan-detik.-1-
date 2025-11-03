#include <iostream>

using namespace std;

int main() {
    int total_detik, jam, menit, detik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << ">>";
    cin >> total_detik;
    
    jam = total_detik / 3600;
    int sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;
    cout << "Hasil Konversi:" << endl;
    cout << total_detik << " detik = " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}


