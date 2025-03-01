<?php
include 'PetShop.php'; // Menghubungkan dengan file PetShop.php
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Produk PetShop</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; }
        table { width: 80%; margin: 20px auto; border-collapse: collapse; }
        th, td { border: 1px solid black; padding: 8px; text-align: center; }
        th { background-color: blue; color: white; }
    </style>
</head>
<body>
    <h2>Daftar Produk PetShop</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Foto</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>
        <?php foreach ($products as $product) { $product->display(); } ?>
    </table>
</body>
</html>
