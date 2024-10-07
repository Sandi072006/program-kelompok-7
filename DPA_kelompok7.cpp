#include <iostream>
using namespace std;

double htiungkebutuhanprotein(double beratbadan) {
   return 0.8 * beratbadan;
   
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

    cout<<"masukan berat badan/kg : ";
    cin>>beratbadan;
    
    kebutuhanprotein = htiungkebutuhanprotein(beratbadan);

    cout<<kebutuhanprotein<<" gram protein"<<endl;
    cout<<"jumlah protein tersebut yang harus kamu penuhi untuk memenuhi kebutuhan protein harianmu"<<endl;
}

cout<<"Berapa jenis aktivitas yang anda lakukan hari ini?";
cin>>jumlah_aktivitas;
kalori_keluar = hitungKaloriKeluar(jumlah_aktivitas);
cout << "Total kalori yang keluar hari ini : " << kalori_keluar << "kcal\n";

tes aja
