from PetShop import Baju

# Fungsi untuk menampilkan daftar produk
def display_products(products):
    print("\n=== Daftar Produk PetShop ===")
    print("-" * 135)
    print("| ID | Nama Produk      | Harga        | Stok  | Foto        | Jenis      | Bahan      | Warna      | Untuk      | Size  | Merk       |")
    print("-" * 135)
    for p in products:
        p.display()
    print("-" * 135)

def main():
    products = [
        Baju("Baju Anjing", 75000, 10, "baju.jpg", "Pakaian", "Kain", "Merah", "Anjing", "M", "DogWear"),
        Baju("Baju Kucing", 65000, 8, "baju_k.jpg", "Pakaian", "Kain", "Biru", "Kucing", "S", "CatWear"),
        Baju("Kalung Anjing", 50000, 15, "kalung.jpg", "Kalung", "Kulit", "Hitam", "Anjing", "L", "Gucci"),
        Baju("Mainan Tikus", 20000, 20, "mainan.jpg", "Mainan", "Plastik", "Abu", "Semua", "S", "Code"),
        Baju("Shampoo Hewan", 45000, 12, "shampoo.jpg", "Shampoo", "Cair", "Putih", "Semua", "M", "Clear"),
    ]

    # 📌 Menampilkan daftar produk sebelum menu muncul
    display_products(products)

    while True:
        print("\nMenu:")
        print("1. Tambah Produk")
        print("2. Keluar")
        pilihan = input("Pilih menu: ")

        if pilihan == "1":
            # Input user untuk menambahkan produk baru
            print("\nTambahkan produk baru:")
            nama = input("Nama: ")
            harga = float(input("Harga: "))
            stok = int(input("Stok: "))
            foto = input("Foto: ")
            jenis = input("Jenis: ")
            bahan = input("Bahan: ")
            warna = input("Warna: ")
            untuk = input("Untuk: ")
            size = input("Size: ")
            merk = input("Merk: ")

            products.append(Baju(nama, harga, stok, foto, jenis, bahan, warna, untuk, size, merk))

            print("\nProduk berhasil ditambahkan!")
            display_products(products)  # 📌 Menampilkan tabel terbaru
        elif pilihan == "2":
            print("Terima kasih telah menggunakan aplikasi!")
            break
        else:
            print("Pilihan tidak valid, silakan coba lagi.")

if __name__ == "__main__":
    main()
