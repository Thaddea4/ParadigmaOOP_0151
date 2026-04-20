#include <iostream>
using namespace std;

class Barang{
    public:
string nama;
int jumlah;
string kategori;
string tanggalProduksi;

void printData(){
    cout << "Nama : " << nama << endl; 
    cout << "Jumlah: " << jumlah << endl; 
    cout << "Kategori : " << kategori << endl; 
    cout << "Tanggal Produksi : " << tanggalProduksi << endl; 
}
}; // batas class

int main(){
        Barang elektronik;
elektronik.nama = "Setrika" ;
elektronik.jumlah = 80;
elektronik.kategori = "Elektronik" ;
elektronik.tanggalProduksi = "2025-04-21" ;

elektronik.printData();
    Barang nonElektronik;
nonElektronik.nama = "Keranjang" ;
nonElektronik.jumlah = 25;
nonElektronik.kategori = "nonElektronik" ;
nonElektronik.tanggalProduksi = "2025-04-21" ;

nonElektronik.printData();
}