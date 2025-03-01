import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    // Fungsi untuk menampilkan daftar produk
    public static void displayProducts(List<PetShop> products) {
        System.out.println("\n=== Daftar Produk PetShop ===");
        System.out.println("--------------------------------------------------------------------------------------------------------------------------------------");
        System.out.println("| ID | Nama Produk      | Harga       | Stok  | Foto        | Jenis      | Bahan      | Warna      | Untuk      | Size  | Merk       |");
        System.out.println("--------------------------------------------------------------------------------------------------------------------------------------");
        for (PetShop p : products) {
            p.display();
        }
        System.out.println("--------------------------------------------------------------------------------------------------------------------------------------");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<PetShop> products = new ArrayList<>();

        // Menambahkan produk awal
        products.add(new Baju("Baju Anjing", 75000, 10, "baju.jpg", "Pakaian", "Kain", "Merah", "Anjing", "M", "DogWear"));
        products.add(new Baju("Baju Kucing", 65000, 8, "baju_k.jpg", "Pakaian", "Kain", "Biru", "Kucing", "S", "CatWear"));
        products.add(new Baju("Kalung Anjing", 50000, 15, "kalung.jpg", "Kalung", "Kulit", "Hitam", "Anjing", "L", "Gucci"));
        products.add(new Baju("Mainan Tikus", 20000, 20, "mainan.jpg", "Mainan", "Plastik", "Abu", "Semua", "S", "Code"));
        products.add(new Baju("Shampoo Hewan", 45000, 12, "shampoo.jpg", "Shampoo", "Cair", "Putih", "Semua", "M", "Clear"));

        // Menampilkan daftar produk sebelum menu muncul
        displayProducts(products);

        int pilihan;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Tambah Produk");
            System.out.println("2. Keluar");
            System.out.print("Pilih menu: ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // Membersihkan buffer input

            if (pilihan == 1) {
                // Input user untuk menambahkan produk baru
                System.out.println("\nTambahkan produk baru:");
                System.out.print("Nama: ");
                String nama = scanner.nextLine();
                System.out.print("Harga: ");
                double harga = scanner.nextDouble();
                System.out.print("Stok: ");
                int stok = scanner.nextInt();
                scanner.nextLine(); // Membersihkan buffer input
                System.out.print("Foto: ");
                String foto = scanner.nextLine();
                System.out.print("Jenis: ");
                String jenis = scanner.nextLine();
                System.out.print("Bahan: ");
                String bahan = scanner.nextLine();
                System.out.print("Warna: ");
                String warna = scanner.nextLine();
                System.out.print("Untuk: ");
                String untuk = scanner.nextLine();
                System.out.print("Size: ");
                String size = scanner.nextLine();
                System.out.print("Merk: ");
                String merk = scanner.nextLine();

                products.add(new Baju(nama, harga, stok, foto, jenis, bahan, warna, untuk, size, merk));

                System.out.println("\nProduk berhasil ditambahkan!");
                displayProducts(products); // Menampilkan tabel terbaru
            } else if (pilihan == 2) {
                System.out.println("Terima kasih telah menggunakan aplikasi!");
            } else {
                System.out.println("Pilihan tidak valid, silakan coba lagi.");
            }
        } while (pilihan != 2);

        scanner.close();
    }
}
