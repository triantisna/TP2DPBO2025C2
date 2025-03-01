#include <iostream>
#include <vector>
#include "PetShop.cpp"

using namespace std;

// Fungsi untuk menampilkan daftar produk
void displayProducts(const vector<PetShop*>& products) {
    cout << "\n=== Daftar Produk PetShop ===\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "| ID | Nama Produk      | Harga       | Stok  | Foto        | Jenis      | Bahan      | Warna      | Untuk      | Size  | Merk       |\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------\n";
    for (const auto& p : products) {
        p->display();
        cout << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------------------------\n";
}

int main() {
    vector<PetShop*> products = {
        new Baju("Baju Anjing", 75000, 10, "baju.jpg", "Pakaian", "Kain", "Merah", "Anjing", "M", "DogWear"),
        new Baju("Baju Kucing", 65000, 8, "baju_k.jpg", "Pakaian", "Kain", "Biru", "Kucing", "S", "CatWear"),
        new Baju("Kalung Anjing", 50000, 15, "kalung.jpg", "Kalung", "Kulit", "Hitam", "Anjing", "L", "Gucci"),
        new Baju("Mainan Tikus", 20000, 20, "mainan.jpg", "Mainan", "Plastik", "Abu", "Semua", "S", "Code"),
        new Baju("Shampoo Hewan", 45000, 12, "shampoo.jpg", "Shamapoo", "Cair", "Putih", "Semua", "M", "Clear"),
    };

    // 📌 Menampilkan daftar produk yang sudah ada sebelum user memilih menu
    displayProducts(products);

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Produk\n";
        cout << "2. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan buffer input

        if (pilihan == 1) {
            // Input user untuk menambahkan produk baru
            string nama, foto, jenis, bahan, warna, untuk, size, merk;
            double harga;
            int stok;

            cout << "\nTambahkan produk baru: \n";
            cout << "Nama: "; getline(cin, nama);
            cout << "Harga: "; cin >> harga;
            cout << "Stok: "; cin >> stok;
            cin.ignore();
            cout << "Foto: "; getline(cin, foto);
            cout << "Jenis: "; getline(cin, jenis);
            cout << "Bahan: "; getline(cin, bahan);
            cout << "Warna: "; getline(cin, warna);
            cout << "Untuk: "; getline(cin, untuk);
            cout << "Size: "; getline(cin, size);
            cout << "Merk: "; getline(cin, merk);

            products.push_back(new Baju(nama, harga, stok, foto, jenis, bahan, warna, untuk, size, merk));

            cout << "\nProduk berhasil ditambahkan!\n";
            displayProducts(products); // 📌 Menampilkan tabel terbaru
        } else if (pilihan == 2) {
            cout << "Terima kasih telah menggunakan aplikasi!\n";
        } else {
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
        }
    } while (pilihan != 2);

    // Cleanup
    for (auto& p : products) delete p;
    return 0;
}
