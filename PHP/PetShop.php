<?php
class PetShop {
    protected static int $nextId = 1;
    protected int $id;
    protected string $nama_produk;
    protected int $harga_produk;
    protected int $stok_produk;
    protected string $foto_produk;

    public function __construct(string $nama, int $harga, int $stok, string $foto) {
        $this->id = self::$nextId++;
        $this->nama_produk = $nama;
        $this->harga_produk = $harga;
        $this->stok_produk = $stok;
        $this->foto_produk = $foto;
    }

    public function display(): void {
        echo "<tr>
                <td>{$this->id}</td>
                <td>{$this->nama_produk}</td>
                <td>Rp " . number_format($this->harga_produk, 0, ',', '.') . "</td>
                <td>{$this->stok_produk}</td>
                <td><img src='{$this->foto_produk}' width='100' height='100' style='object-fit: cover;'></td>";
    }
}

class Aksesoris extends PetShop {
    protected string $jenis, $bahan, $warna;

    public function __construct(string $nama, int $harga, int $stok, string $foto, string $jenis, string $bahan, string $warna) {
        parent::__construct($nama, $harga, $stok, $foto);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function display(): void {
        parent::display();
        echo "<td>{$this->jenis}</td>
              <td>{$this->bahan}</td>
              <td>{$this->warna}</td>";
    }
}

class Baju extends Aksesoris {
    private string $untuk, $size, $merk;

    public function __construct(string $nama, int $harga, int $stok, string $foto, string $jenis, string $bahan, string $warna, string $untuk, string $size, string $merk) {
        parent::__construct($nama, $harga, $stok, $foto, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    public function display(): void {
        parent::display();
        echo "<td>{$this->untuk}</td>
              <td>{$this->size}</td>
              <td>{$this->merk}</td></tr>";
    }
}

$products = [
    new Baju("Baju Anjing", 75000, 10, "https://img.lazcdn.com/g/p/3f66b43c4a794955ef18c1915469b077.png_720x720q80.png", "Pakaian", "Kain", "Merah", "Anjing", "M", "DogWear"),
    new Baju("Baju Kucing", 65000, 8, "https://awsimages.detik.net.id/community/media/visual/2020/09/13/kostum-untuk-kucing-kesayangan-karya-pria-asal-cirebon_169.jpeg?w=600&q=90", "Pakaian", "Kain", "Biru", "Kucing", "S", "CatWear"),
    new Baju("Kalung Anjing", 50000, 15, "https://ae01.alicdn.com/kf/H7cff273308cd4b8ab620cf1223ae7bdcJ.jpg?width=800&height=752&hash=1552", "Kalung", "Kulit", "Hitam", "Anjing", "L", "Gucci"),
    new Baju("Mainan Tikus", 20000, 20, "https://s.alicdn.com/@sc04/kf/HTB1A.ZAXxv1gK0jSZFFq6z0sXXaC.jpg_720x720q50.jpg", "Mainan", "Plastik", "Abu", "Semua", "S", "Code"),
    new Baju("Shampoo Hewan", 45000, 12, "https://images.tokopedia.net/img/cache/700/VqbcmM/2020/10/26/444daa14-abe8-4429-a40b-1429236d3ee0.jpg", "Shamapoo", "Cair", "Putih", "Semua", "M", "Clear")
];
?>