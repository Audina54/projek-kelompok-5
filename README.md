# Student Learning Resource & Course Material Tracker

Aplikasi berbasis console (CLI) yang dibuat menggunakan bahasa C++ untuk mendata, mengelola, mengelompokkan, mengurutkan, dan mencari berbagai sumber belajar mahasiswa (buku, catatan, tutorial, video pembelajaran, maupun *online course*).

Proyek ini disusun untuk memenuhi Tugas Project Praktikum Pemrograman — Kelompok 5 (Program Studi Ilmu Komputer, FMIPA UGM).

---

## Fitur Utama

1. **Penyimpanan & Pemuatan Data Otomatis (`data.txt`)**
   * Otomatis memuat riwayat data sumber belajar dari file `data.txt` saat program dijalankan dan menyimpan data baru secara permanen (*append*) menggunakan library `<fstream>`.
2. **Penambahan Data Sumber Belajar**
   * Menambahkan data baru meliputi ID otomatis, judul (1 kata dengan pemisah `_`), kategori, tingkat kesulitan (`mudah`, `sedang`, `sulit`), rating (`1.0` – `5.0`), dan estimasi durasi belajar (menit), lengkap dengan validasi input.
3. **Statistik Ringkas (Rekursif & Ekstrem)**
   * Menghitung rata-rata rating dan rata-rata durasi belajar (menggunakan fungsi rekursif `totaltime`), serta menampilkan sumber belajar dengan rating tertinggi/terendah dan durasi waktu terpanjang/terpendek.
4. **Pengelompokan & Pengurutan Manual (*Bubble Sort*)**
   * Mengelompokkan sumber belajar berdasarkan tingkat kesulitan (`mudah`, `sedang`, `sulit`).
   * Mengurutkan data secara *Ascending* maupun *Descending* berdasarkan **Rating** atau **Durasi Waktu** menggunakan algoritma *Bubble Sort* manual.
5. **Pencarian Data (*Linear Search*) & Rekomendasi Durasi**
   * Mencari sumber belajar berdasarkan **ID**, **Judul**, **Kategori**, maupun **Durasi Waktu Belajar** yang tersedia (menampilkan seluruh materi dengan estimasi waktu $\le$ waktu yang dimiliki pengguna).

---

## Struktur File Proyek

```text
projek-kelompok-5/
├── main.cpp              # Program utama & navigasi menu interaktif
├── struct.hpp            # Definisi struktur data (data_sumber)
├── input_output.hpp      # Tampilan menu, validasi input, dan format tabel output
├── load_save_file.hpp    # Operasi baca/tulis file eksternal (data.txt)
├── calculation.hpp       # Perhitungan rata-rata, nilai min/max, & rekursi total waktu
├── sorting.hpp           # Implementasi manual Bubble Sort (Ascending & Descending)
├── searching.hpp         # Implementasi manual Linear Search (ID, judul, kategori, durasi)
├── data.txt              # File penyimpanan data sumber belajar
└── README.md             # Dokumentasi proyek

---

## Anggota Kelompok 5

1. Audina Dwiyunita Putri (26/587248/PA/24748) — Analisis masalah, pseudocode, menu utama, & integrasi program
2. Radithya Prama Syandana (NIM) — Struct, array, input/output, validasi, & kontrol alur
3. Azki Azziyad (26/579227/PA/24271) — Modularisasi fungsi, perhitungan statistik, & fungsi rekursif
4. Faiz (26/588977/PA/24860) — Algoritma sorting, searching, pengujian (test case), & debugging