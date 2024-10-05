#include <iostream>
using namespace std;

double htiungkebutuhanprotein(double beratbadan) {
   return 0.8 * beratbadan;
   
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