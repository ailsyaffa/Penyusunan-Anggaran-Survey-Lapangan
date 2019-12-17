Kelompok 15

Penyusunan Anggaran Survey Lapangan

Ailsa Syaffa Dynia (1806199871)

Anugrah Indah Lestari (1906324302)

# Penyusunan Anggaran Survey Lapangan

Penyusunan anggaran survey lapangan terdiri dari item transportasi dan akomodasi. Anggaran tersebut berdasarkan pada Peraturan Menteri Keuangan No. 78 /PMK.02/2019 tentang Standar Biaya Masukan Tahun Anggaran 2020 yang dibagi berdasarkan lokasi tujuan survey lapangan.

Pada program ini, pengguna diminta untuk memasukan nama, jabatan, kota tujuan, tanggal keberangkatan, dan durasi perjalanan sehingga secara otomatis akan dihasilkan file dengan format .txt disertai jumlah biaya yang perlu dianggarkan berdasarkan perhitungan durasi perjalanan.

## Implementasi Pointer

1. FILE *f : menunjukan alamat file dengan format .txt

2. *next   : menunjukan alamat dari komponen data yang terdapat pada data struktur

## Implementasi Data Struktur

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/struktur1.png" width="400">

1. struct akomodasi: berisi data yang akan diinput ke dalam file akomodasi .txt 

2. struct transportasi: berisi data yang akan diinput ke dalam file transportasi .txt  

## Implementasi Linked List

1. Digunakan untuk pengisian data ke dalam data struktur

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/ll1.png" width="400">

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/ll2.png" width="400">

2. Digunakan untuk mengisi data ke dalam file dengan format .txt

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/ll3.png" width="400">

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/ll4.png" width="400">

3. Digunakan untuk menghapus/cancel input data struktur terakhir

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/hapus.png" width="400">

## Implementasi Modular

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/modular.png" width="400">

## Tampilan Program

1. Menu Utama

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/menu.png" width="400">

2. Pemilihan Pulau

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/pilpul.png" width="400">

3. Pemilihan Provinsi

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/pilprov.png" width="400">

4. Pengisian Data

<img src="https://github.com/ailsyaffa/Penyusunan-Anggaran-Survey-Lapangan/blob/master/pics/isi.png" width="400">

## Hasil Program

Program ini menghasilkan data yang disimpan ke dalam file .txt. Terdapat 2 file yaitu file akomodasifik.txt yang berisi data untuk akomodasi, dan file transportasifix.txt berisi data untuk transportasi. Kedua file .txt tersebut sudah tertera .
