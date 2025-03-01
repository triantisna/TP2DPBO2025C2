// PetShop.cpp
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Base class PetShop
class PetShop {
protected:
    int id;
    string nama_produk;
    double harga_produk;
    int stok_produk;
    string foto_produk;
    static int nextId; // Deklarasi variabel statis

public:
    PetShop(string nama, double harga, int stok, string foto)
        : id(nextId++), nama_produk(nama), harga_produk(harga), stok_produk(stok), foto_produk(foto) {}
    virtual void display() const {
        cout << "| " << setw(2) << id
             << " | " << setw(16) << nama_produk
             << " | Rp " << setw(8) << harga_produk
             << " | " << setw(5) << stok_produk
             << " | " << setw(11) << foto_produk;
    }
    virtual ~PetShop() {} // Destructor virtual untuk cleanup
};

// Inisialisasi variabel statis (hanya di satu tempat)
int PetShop::nextId = 1;

// Derived class Aksesoris
class Aksesoris : public PetShop {
protected:
    string jenis, bahan, warna;

public:
    Aksesoris(string nama, double harga, int stok, string foto, string jenis, string bahan, string warna)
        : PetShop(nama, harga, stok, foto), jenis(jenis), bahan(bahan), warna(warna) {}
    void display() const override {
        PetShop::display();
        cout << " | " << setw(10) << jenis
             << " | " << setw(10) << bahan
             << " | " << setw(10) << warna;
    }
};

// Derived class Baju
class Baju : public Aksesoris {
private:
    string untuk, size, merk;

public:
    Baju(string nama, double harga, int stok, string foto, string jenis, string bahan, string warna, string untuk, string size, string merk)
        : Aksesoris(nama, harga, stok, foto, jenis, bahan, warna), untuk(untuk), size(size), merk(merk) {}
    void display() const override {
        Aksesoris::display();
        cout << " | " << setw(10) << untuk
             << " | " << setw(5) << size
             << " | " << setw(10) << merk << " |";
    }
};
