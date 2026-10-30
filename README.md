# STUDENT LEARNING RESOURCE & COURSE MATERIAL TRACKER

# Kasus: 
Buat program untuk mengelola sumber belajar seperti buku, catatan kuliah, tutorial, video pembelajaran, dan online course.

# Data minimal yang disimpan:
•	ID sumber belajar
•	Judul
•	Kategori
•	Tingkat kesulitan
•	Rating
•	Estimasi waktu belajar (menit)

# Fitur wajib:
•	Menambah dan menampilkan data sumber belajar.
•	Menghitung rata-rata rating dan rata-rata estimasi waktu belajar.
•	Menentukan sumber belajar dengan rating tertinggi/terendah dan waktu belajar terpanjang/terpendek.
•	Menggunakan IF untuk mengelompokkan tingkat kesulitan atau rekomendasi penggunaan.
•	Mengurutkan data berdasarkan rating atau estimasi waktu belajar.
•	Mencari data berdasarkan ID, judul, atau kategori.
•	Menggunakan fungsi rekursif untuk menghitung total estimasi waktu belajar seluruh sumber.

# Fitur tantangan: 
pengguna memasukkan waktu belajar yang tersedia, lalu program menampilkan sumber belajar yang dapat diselesaikan dalam waktu tersebut.

# KETERANGAN Data 
•	ID sumber belajar (dari program, mulai dari 1 dst)
•	Judul (dari user)
•	Kategori (buku, catatan kuliah, tutorial, video pembelajaran, dan online course) //kayanya mending di dikitin
•	Tingkat kesulitan (mudah, sedang, sulit)
•	Rating (1-5)
•	Estimasi waktu belajar (menit)

# MENU
============= Menu =============
1. Menambah data sumber belajar
2. Menampilkan data sumber belajar
3. Mencari data sumber belajar
4. Keluar
================================.
pilih (1-4) : 



# PILIH 1
Judul : input

==== Kategori ==== 
1. buku
2. catatan
3. tutorial
4. video pembelajaran
5. online course
==================.
pilih (1-5) : input

===== Tingkat Kesulitan =====
1. Mudah
2. Sedang
3. Sulit
=============================.
pilih (1-3) = input

Rating (1-5) = input

Durasi belajar (menit) = input



# PILIH 2
rata-rata rating       = output (total semua rating/ total sumber data belajar)
rata-rata durasi waktu = output (total semua durasi/ total sumber data belajar)

====== Menampilkan Data =======
1. Tampilkan seluruh data sumber belajar
2. Tampilkan data sumber belajar dengan rating tertinggi dan terendah
3. Tampilkan data sumber belajar dengan durasi terpanjang dan terpendek
4. Tampilkan data sumber belajar (terkelompok tingkat kesulitan)
5. Tampilkan data sumber belajar yang terekomendasi
6. Tampilkan data sumber belajar terurut (rating)
7. Tampilkan data sumber belajar terurut (durasi waktu)
8. Tampilkan data sumber belajar berdasarkan durasi belajar yang dimiliki //ini fitur tantangan
9. Kembali
================================.
pilih (1-8) : input
// bahasanya seadanya dlu aja ya, nanti gampang diubah"

## pilih 1
//nampilin semua datanya
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 2        AVM                         Catatan                 Sedang                 5         10
 3        Matdis                      Online Course           Sulit                  3.5       32
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
 5        AVM                         Catatan                 Sedang                 1         50
 6        Matdis                      Online Course           Mudah                  3.5       17
//dst


## pilih 2
DATA SUMBER BELAJAR DENGAN RATING TERTINGGI
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 2        AVM                         Catatan                 Sedang                 5         10
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22

DATA SUMBER BELAJAR DENGAN RATING TERENDAH
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 5        AVM                         Catatan                 Sedang                 1         50


## pilih 3
DATA SUMBER BELAJAR DENGAN DURASI WAKTU TERPANJANG
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 5        AVM                         Catatan                 Sedang                 1         50

DATA SUMBER BELAJAR DENGAN DURASI WAKTU TERPENDEK
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 2        AVM                         Catatan                 Sedang                 5         10


## pilih 4
TINGKAT KESULITAN : MUDAH
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
 6        Matdis                      Online Course           Mudah                  3.5       17

TINGKAT KESULITAN : SEDANG
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 2        AVM                         Catatan                 Sedang                 5         10
 5        AVM                         Catatan                 Sedang                 1         50

TINGKAT KESULITAN : SULIT
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 3        Matdis                      Online Course           Sulit                  3.5       32


## pilih 5
// jujur belum kepikiran
// paling kaya kita bikin rumus nya gitu, kaya dengan rating tertinggi dan waktu terpendek

## pilih 6
DATA SUMBER BELAJAR URUT RATING
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 5        AVM                         Catatan                 Sedang                 1         50
 6        Matdis                      Online Course           Mudah                  3.5       17
 3        Matdis                      Online Course           Sulit                  3.5       32
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 2        AVM                         Catatan                 Sedang                 5         10
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
 
## pilih 7
DATA SUMBER BELAJAR URUT DURASI WAKTU
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 2        AVM                         Catatan                 Sedang                 5         10
 6        Matdis                      Online Course           Mudah                  3.5       17
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
 3        Matdis                      Online Course           Sulit                  3.5       32
 5        AVM                         Catatan                 Sedang                 1         50

//ATAU BISA JUGA
## pilih 6 atau pilih 7
==== Urut =====
1. Ascending
2. Descending
3. Kembali
===============
pilih (1-3) :
//terus lanjut kaya disebelumnya dengan tambahan (ASCENDING) / (DESCENDING) -> sesuai dengan pilihan user


## pilih 8 //fitur tantangan, dipikir terakhir aja
Berapa durasi waktu belajar yang anda miliki : input

Durasi = 30
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 2        AVM                         Catatan                 Sedang                 5         10
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
 6        Matdis                      Online Course           Mudah                  3.5       17



# PILIH 3
======= Cari Data =======
1. Berdasarkan ID
2. Berdasarkan Judul
3. Berdasarkan Kategori
4. Kembali
=========================.
pilih (1-4) :


# pilih 1
ID : input

ID = 3
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 3        Matdis                      Online Course           Sulit                  3.5       32


# pilih 2
Judul : input

Judul = AVM
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 2        AVM                         Catatan                 Sedang                 5         10


# pilih 3
==== Kategori ====
1. buku
2. catatan
3. tutorial
4. video pembelajaran
5. online course
6. kembali
==================.
pilih (1-6) : input

// misal input 3

Kategori = Tutorial 
========================================================================================================.
ID        JUDUl                       KATEGORI                TINGKAT KESULITAN     RATING     WAKTU
========================================================================================================.
 1        Kalkulus (Limit)            Tutorial                Sulit                  4         20
 4        Kalkulus (Limit)            Tutorial                Mudah                  5         22
