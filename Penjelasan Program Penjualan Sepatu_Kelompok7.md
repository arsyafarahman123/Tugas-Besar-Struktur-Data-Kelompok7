# <h1 align="center">Program Penjualan Sepatu Kelompok 7 IF-11D </h1>
<p align="center"> Materi Struktur Data : Struct, Stack, Array, Search </p>

</p>Nama Anggota Kelompok: 
</p> 1. Qonita Rahayu Atmi - 2311102128</p>
</p> 2. Arsya Fathiha Rahman - 2311102152</p>
</p> 3. Nisrina Amalia Iffatunnisa - 2311102156</p>

<p align="center">  Kelas : IF-11-D </p>
<p align="center"> Dosen : Muhammad Afrizal Amrustian, S. Kom., M. Kom. </p>
<p align="center">  Mata Kuliah : Struktur Data dan Algoritma  <br/>
<p align="center">  Semester : 2 </p>

## Latar Belakang
</br> Toko sepatu sering kali memiliki banyak persediaan sepatu dengan berbagai jenis, ukuran, dan warna. Mengelola persediaan ini secara efektif dapat menjadi tantangan, terutama saat stok sepatu berlimpah dan transaksi penjualan ramai. Kerap kali petugas toko Kesulitan ketik melacak persediaan, mereka sulit untuk mengetahui jumlah sepatu yang tersedia untuk setiap jenis, ukuran, dan warna, terutama saat stok sepatu banyak dan variasinya beragam. Salah satu solusi untuk mengatasi permasalahan ini adalah dengan memanfaatkan program komputer yang dapat membantu mengelola tumpukan (stack) persediaan sepatu. Program ini dapat diimplementasikan menggunakan bahasa pemrograman C++ dan memanfaatkan struktur data seperti struct, stack, array, dan fungsi pencarian. </br>

## Struktur Data yang Digunakan
</br> Berikut adalah beberapa struktur data yang dapat digunakan dalam program untuk mengelola tumpukan persediaan sepatu:</br>
</br> 1. Struct: Struct dapat digunakan untuk menyimpan informasi tentang setiap sepatu, seperti jenis, ukuran, warna, harga, dan jumlah yang tersedia. </br>
</br> 2. Stack: Stack dapat digunakan untuk menyimpan tumpukan sepatu yang masuk dan keluar dari toko.</br>
</br> 3. Array: Array dapat digunakan untuk menyimpan informasi tentang persediaan sepatu secara keseluruhan.</br>
</br> 4. Fungsi pencarian (sequential search): Fungsi pencarian dapat digunakan untuk menemukan sepatu dalam database berdasarkan jenis, ukuran, warna, dan harga. </br>

 </br> Algoritma pada Program Penjualan Sepatu  </br>
 </br> 1. Mulai  </br>
 </br> 2. Menampilkan menu </br>
 </br> 3. Memasukan tampilan menu  </br>
 </br> 4. Memilih menu 1 untuk menambahkan Sepatu  </br>
          - <p Masukkan merek Sepatu  </p>
          - Masukkan ukuran Sepatu  </br>
          - Masukkan warna Sepatu  </br>
          - Berhasil ditambahkan  </br>
 </br> 5. Memilih menu 2 yaitu sisipkan Sepatu  </br>
          - Masukkan indeks untuk menyisipkan di atas tumpukan (dimulai dari 1)  </br>
          - Masukkan merek sepatu  </br>
          - Masukkan ukuran Sepatu  </br>
          - Masukkan warna Sepatu  
          - Berhasil disisipkan  </br>
</br> 6. Memilih menu 3 yaitu hapus Sepatu  </br>
         </br> - Masukkan indeks untuk dihapus (dimulai dari 1)  </br>
         </br> - Berhasil dihapus  </br>
 </br> 7. Memilih menu 4 yaitu tampilkan Sepatu  </br>
         </br> - Berhasil ditampilkan  </br>
 </br> 8. Memilih menu 5 yaitu edit Sepatu  </br>
         </br> - Masukkan indeks untuk diedit (dimulai dari 1)  </br>
         </br> - Masukkan merek Sepatu baru  </br>
         </br> - Masukkan ukuran sepatu baru  </br>
         </br> - Masukkan warna Sepatu baru </br> 
         </br> - Berhasil diedit </br>
</br> 9. Memilih menu 6 yaitu mencari sepatu </br>
         </br> - Masukkan tipe pencarian (merek/ukuran/warna) </br>
         </br> - Masukkan kata kunci pencarian </br>
         </br> - Berhasil dicari </br>
</br> 10. Memilih menu 0 yaitu berhasil keluar </br>
</br> 11.  Selesai </br>

## Gambar Flowchart 
![Flowchart-Penjualan_Sepatu-Kelompok7](https://github.com/arsyafarahman123/Tugas-Besar-Struktur-Data-Kelompok7/blob/main/Flowchart%20Program%20Penjualan%20Sepatu%20Kelompok%207.jpeg)<br/>

## Penjelasan Program

1. Struct pada program </br>
```struct Sepatu { string merek; string ukuran; string warna; };``` </br>
Struktur Sepatu digunakan untuk menyimpan data sepatu yang terdiri dari atribut merek, ukuran, dan warna dengan tipe data string. </br>

2. Kelas TumpukanSepatu </br>
Kelas TumpukanSepatu berfungsi untuk mengelola operasi yang dapat dilakukan pada tumpukan sepatu. Kelas ini menggunakan vektor <sepatu> untuk menyimpan data sepatu. </br>

3. tumpukan: Vector dari struct sepatu yang berfungsi sebagai tumpukan untuk menyimpan data sepatu.</br>
Metode:</br>

1. push(Sepatu sepatu): </br>
Fungsi ini digunakan untuk menambahkan sepatu ke tumpukan. Sepatu akan ditambahkan ke bagian belakang vektor.</br>
2. insert(int index, Sepatu sepatu):</br>
Fungsi ini digunakan untuk menyisipkan sepatu pada indeks tertentu di tumpukan. Indeks dimulai dari 1. Jika indeks tidak valid, akan ditampilkan pesan kesalahan. </br>
3. pop():</br>
Fungsi ini digunakan untuk menghapus sepatu dari bagian belakang tumpukan. Jika tumpukan kosong, akan ditampilkan pesan kesalahan dan mengembalikan sepatu kosong.</br>
4. remove(int index):</br>
Fungsi ini digunakan untuk menghapus sepatu pada indeks tertentu di tumpukan. Indeks dimulai dari 1. Jika indeks tidak valid, akan ditampilkan pesan kesalahan.</br>
5. print(): </br>
Fungsi ini digunakan untuk menampilkan semua sepatu dalam tumpukan. Jika tumpukan kosong, akan ditampilkan pesan kesalahan. Fungsi ini menampilkan sepatu dalam format tabel. </br>
6. edit(int index, Sepatu sepatu): </br>
Fungsi ini digunakan untuk mengedit data sepatu pada indeks tertentu di tumpukan. Indeks dimulai dari 1. Jika indeks tidak valid, akan ditampilkan pesan kesalahan. </br>
7. search(string keyword, string type):</br>
Fungsi ini digunakan untuk mencari sepatu berdasarkan keyword dan tipe pencarian (merek, ukuran, atau warna). Jika sepatu ditemukan, akan ditampilkan dalam format tabel. Jika tidak ditemukan, akan ditampilkan pesan bahwa sepatu tidak ditemukan.</br>

## Cara Kerja Program
pengguna melakukan running kemudian mereka memilih. </br>
1. Menu Utama: Program menampilkan menu utama dengan pilihan untuk menambah, menyisipkan, menghapus, menampilkan, mengedit, mencari sepatu, dan keluar. </br>
2. Menambah Sepatu: Pengguna memasukkan data sepatu baru yang akan ditambahkan ke tumpukan.  </br>
3. Menyisipkan Sepatu: Pengguna memilih indeks untuk menyisipkan sepatu baru di tumpukan. </br>
4. Menghapus Sepatu: Pengguna memilih indeks untuk menghapus sepatu dari tumpukan. </br>
5. Menampilkan Sepatu: Program menampilkan semua sepatu dalam tumpukan dalam bentuk tabel.  </br>
6. Mengedit Sepatu: Pengguna memilih indeks dan memasukkan data baru untuk mengedit sepatu.  </br>
7. Mencari Sepatu: Pengguna memasukkan keyword dan tipe pencarian untuk mencari sepatu dalam tumpukan. </br>
8. Keluar: Program keluar jika pengguna memilih pilihan 0.  </br>



 

