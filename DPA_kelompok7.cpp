#include <iostream>
using namespace std;

double htiungkebutuhanprotein(double beratbadan) {
   double kebutuhanprotein = 0.8;
          kebutuhanprotein = 0.8 * beratbadan;

   return kebutuhanprotein;
}

double hitungKaloriMasuk(int jumlah_makanan) {
    double total_kalori_masuk = 0;
    for (int i = 1; i <= jumlah_makanan; ++i) {
        double kalori_makanan;
        cout << "Masukkan jumlah kalori makanan ke-" << i << ": ";
        cin >> kalori_makanan;
        total_kalori_masuk += kalori_makanan;
    }
    return total_kalori_masuk;
}

double hitungKaloriKeluar(int jumlah_aktivitas) {
    double total_kalori_keluar = 0;
    for (int i = 1; i <= jumlah_aktivitas; i++) {
        double kalori_aktivitas;
        cout << "Masukkan jumlah kalori yang terbakar dari aktivitas ke-" << i << ": ";
        cin >> kalori_aktivitas;
        total_kalori_keluar += kalori_aktivitas;
    }
   
    return total_kalori_keluar;
} 

int main() {
    double kebutuhanprotein;
    double beratbadan;
    double kalori_keluar;
    int jumlah_aktivitas;

    cout<<"masukan berat badan anda /kg : ";
    cin>>beratbadan;
    
    kebutuhanprotein = htiungkebutuhanprotein(beratbadan);

    cout<<kebutuhanprotein<<" gram protein"<<"/hari"endl;
    cout<<"jumlah protein tersebut yang harus kamu penuhi untuk memenuhi kebutuhan protein harianmu"<<endl;
}

cout<<"Berapa jenis aktivitas yang anda lakukan hari ini?";
cin>>jumlah_aktivitas;
kalori_keluar = hitungKaloriKeluar(jumlah_aktivitas);
cout << "Total kalori yang keluar hari ini : " << kalori_keluar << "kcal\n";








cout << "Berapa jenis makanan yang Anda konsumsi hari ini? ";
cin >> jumlah_makanan;
kalori_masuk = hitungKaloriMasuk(jumlah_makanan);
cout << "\nTotal kalori yang masuk hari ini: " << kalori_masuk << " kcal\n";
