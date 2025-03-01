# JANJI

Saya Trian Tisna Athalla dengan NIM 2001408 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Class Diagram

![Image](https://github.com/user-attachments/assets/d375c41a-cb27-468a-99a2-18fe1a1b2945)

# Desain Program

Program ini merupakan sistem manajemen produk untuk toko hewan peliharaan (PetShop) yang dapat dijalankan dalam empat bahasa pemrograman: C++, Java, Python, dan PHP. Program ini berfungsi untuk menampilkan daftar produk dengan atribut tertentu dan mendukung penyimpanan serta pengolahan data dalam berbagai bentuk.

Program terdiri dari beberapa class dan atribut:

1. Class PetShop (Superclass / Kakek)

   - Merepresentasikan sebuah produk dengan atribut:
     - ID (identifikasi unik produk)
     - Nama Produk (string)
     - Harga (integer)
     - Stok (integer)
     - Foto Produk (string, khusus PHP untuk menampilkan gambar)

2. Class Aksesoris (Subclass dari PetShop / Ayah)

   - Atribut tambahan:
     - Jenis (string)
     - Bahan (string)
     - Warna (string)

3. Class Baju (Subclass dari Aksesoris / Anak)
   - Atribut tambahan:
     - Untuk (string)
     - Size (string)
     - Merk (string)

# Alur Program

1. Program Dimulai.
2. Data produk dibuat secara hardcoded.
3. Program menampilkan daftar produk dalam bentuk tabel.
4. Pengguna memilih opsi menu: (untuk CPP, Java dan Python)
   - (Jika memilih 1) -> pengguna diminta menambahkan produk dengan acuan Class Baju.
   - (Jika memilih 2) -> Program dihentikan / keluar.
5. Setiap produk ditampilkan dengan atributnya sesuai dengan masing-masing bahasa pemrograman.
6. Program berjalan hingga pengguna memilih keluar.

Catatan: Pada versi PHP, gambar diambil dari URL eksternal dan ditampilkan dalam tabel HTML dengan ukuran tetap.

# Dokumentasi

Dokumentasi CPP

![Image](https://github.com/user-attachments/assets/2f7b09b2-2086-407a-aba4-c9ba7dab7188)

Dokumentasi Java

![Image](https://github.com/user-attachments/assets/73921c68-f28c-4846-a3eb-b79a642e95ed)

Dokumentasi Python

![Image](https://github.com/user-attachments/assets/45fd0677-defb-4a94-9733-768481211481)

Dokumentasi PHP

![Image](https://github.com/user-attachments/assets/6b7c2ba3-d091-4bbc-b700-2c9d32898d78)
