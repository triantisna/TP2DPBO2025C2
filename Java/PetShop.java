// Kelas Induk PetShop
class PetShop {
    protected int id;
    protected String namaProduk;
    protected double hargaProduk;
    protected int stokProduk;
    protected String fotoProduk;
    private static int nextId = 1; // Variabel statis untuk ID otomatis

    public PetShop(String nama, double harga, int stok, String foto) {
        this.id = nextId++;
        this.namaProduk = nama;
        this.hargaProduk = harga;
        this.stokProduk = stok;
        this.fotoProduk = foto;
    }

    public void display() {
        System.out.printf("| %-2d | %-16s | Rp %-8.2f | %-5d | %-11s", id, namaProduk, hargaProduk, stokProduk, fotoProduk);
    }
}

// Kelas Turunan Aksesoris
class Aksesoris extends PetShop {
    protected String jenis, bahan, warna;

    public Aksesoris(String nama, double harga, int stok, String foto, String jenis, String bahan, String warna) {
        super(nama, harga, stok, foto);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    @Override
    public void display() {
        super.display();
        System.out.printf(" | %-10s | %-10s | %-10s", jenis, bahan, warna);
    }
}

// Kelas Turunan Baju
class Baju extends Aksesoris {
    private String untuk, size, merk;

    public Baju(String nama, double harga, int stok, String foto, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(nama, harga, stok, foto, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    @Override
    public void display() {
        super.display();
        System.out.printf(" | %-10s | %-5s | %-10s |\n", untuk, size, merk);
    }
}
