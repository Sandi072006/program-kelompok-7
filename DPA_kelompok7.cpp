#include <iostream>
using namespace std;

double htiungkebutuhanprotein(double beratbadan) {
   double kebutuhanprotein = 0.8;
          kebutuhanprotein = 0.8 * beratbadan;

   return kebutuhanprotein;
}

double hitungproteinMasuk(int jumlah_makanan) {
    double total_protein_masuk = 0;
    for (int i = 1; i <= jumlah_makanan; ++i) {
        double protein_makanan;
        cout << "Masukkan jumlah protein makanan ke-" << i << ": ";
        cin >> protein_makanan;
        total_protein_masuk += protein_makanan;
    }
    return total_protein_masuk;
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

void hitungjumlahprotein(double protein_masuk, double kebutuhanprotein) {
    double jumlahprotein = protein_masuk - kebutuhanprotein;

    if (jumlahprotein > 0 ) {
        cout << "Anda telah mencukupi kebutuhan protein hari ini." << endl;
    } else if (jumlahprotein < kebutuhanprotein) {
        cout << "Anda kurang mencukupi kebutuhan " << jumlahprotein << " gram protein hari ini." << endl;
    }
}

void hitungSaldoKalori(double kalori_masuk, double kalori_keluar) {
    double saldo_kalori = kalori_masuk - kalori_keluar;

    if (saldo_kalori > 0) {
        cout << "Anda mengalami surplus kalori sebesar " << saldo_kalori << " kal hari ini." << endl;
    } else if (saldo_kalori < 0) {
        cout << "Anda mengalami defisit kalori sebesar " << -saldo_kalori << " kal hari ini." << endl;
    } else {
        cout << "Keseimbangan kalori Anda netral hari ini." << endl;
    }
}

int main() {
    double kebutuhanprotein;
    double beratbadan;
    double kalori_keluar;
    double kalori_masuk;
    double protein_masuk;
    int jumlah_aktivitas;

    cout<<"masukan berat badan anda /kg : ";
    cin>>beratbadan;
    
    kebutuhanprotein = htiungkebutuhanprotein(beratbadan);

    cout<<kebutuhanprotein<<" gram protein"<<"/hari"endl;
    cout<<"jumlah protein tersebut yang harus kamu penuhi untuk memenuhi kebutuhan protein harianmu"<<endl;

    cout << "Berapa jenis makanan yang Anda konsumsi hari ini? ";
    cin >> jumlah_makanan;
    protein_masuk = hitungproteinMasuk(jumlah_makanan);
    cout << "Total protein yang masuk hari ini: " << protein_masuk << " gram" << endl << endl;
    kalori_masuk = hitungKaloriMasuk(jumlah_makanan);
    cout << "Total kalori yang masuk hari ini: " << kalori_masuk << " kal" << endl << endl;

    cout<<"Berapa jenis aktivitas yang anda lakukan hari ini?";
    cin>>jumlah_aktivitas;
    kalori_keluar = hitungKaloriKeluar(jumlah_aktivitas);
    cout << "Total kalori yang keluar hari ini : " << kalori_keluar << "kcal" << endl;
}







