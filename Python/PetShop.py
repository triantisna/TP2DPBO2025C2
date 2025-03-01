class PetShop:
    next_id = 1  # Variabel statis untuk ID otomatis

    def __init__(self, nama, harga, stok, foto):
        self.id = PetShop.next_id
        PetShop.next_id += 1
        self.nama_produk = nama
        self.harga_produk = harga
        self.stok_produk = stok
        self.foto_produk = foto

    def display(self):
        print(f"| {self.id:2} | {self.nama_produk:16} | Rp {self.harga_produk:8,.2f} | {self.stok_produk:5} | {self.foto_produk:11}", end="")

class Aksesoris(PetShop):
    def __init__(self, nama, harga, stok, foto, jenis, bahan, warna):
        super().__init__(nama, harga, stok, foto)
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna

    def display(self):
        super().display()
        print(f" | {self.jenis:10} | {self.bahan:10} | {self.warna:10}", end="")

class Baju(Aksesoris):
    def __init__(self, nama, harga, stok, foto, jenis, bahan, warna, untuk, size, merk):
        super().__init__(nama, harga, stok, foto, jenis, bahan, warna)
        self.untuk = untuk
        self.size = size
        self.merk = merk

    def display(self):
        super().display()
        print(f" | {self.untuk:10} | {self.size:5} | {self.merk:10} |")
