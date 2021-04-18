/*
Binary search merupakan sebuah teknik pencarian data yang telah terurut dengan cara berulang kali membagi separuh dari jumlah data yang dicari sampai sehingga memperkecil lokasi pencarian menjadi satu data. Apabila ditemukan kecocokan data maka program akan mengembalikan output, jika tidak pencarian akan terus berlanjut hingga akhir dari pembagian jumlah data tersebut.

PROGRAM binarySearch1
  {Mencari nilai (x) di dalam array yang telah terurut kecil ke besar. Hasil bernilai 1 jika ditemukan dan mencetak indek nilai tersebut}

VARIABEL:
  arr: array integer
  n: integer {ukuran array}
  x: integer {nilai yang dicari}
  indekX: integer {nilai indek}
  found: boolean
  indekTerkecil: integer
  indekTerbesar: integer
  indekTengah: integer

ALGORITMA:
  indekTerkecil ← 1
  indekTerbesar ← n
  found ← false
  indekX ← -1

  while(indekTerkecil <= indekTerbesar && !found) {
    indekTengah ← (indekTerkecil + indekTerbesar) / 2

    if(x == arr[indekTengah]) {
      found ← true
      indekX ← indekTengah

    } else if(arr[indekTengah] > x) {
      indekTerbesar ← indekTengah - 1

    } else if(arr[indekTengah] < x) {
      indekTerkecil ← indekTengah + 1
    }
  }

*/

#include <iostream>

int main() {
  int n;
  int arr[n];
  int x;
  int indekX, indekTerkecil, indekTerbesar, indekTengah;
  bool found;

  std::cout << "Ukuran array: ";
  std::cin >> n;

  std::cout << "Masukkan elemen array: " << std::endl;
  for(int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Nilai yang dicari: ";
  std::cin >> x;

  indekTerkecil = 0;
  indekTerbesar = n;
  found = false;
  indekX = -1;

  while(indekTerkecil <= indekTerbesar && !found) {
    indekTengah = (indekTerkecil + indekTerbesar) / 2;

    if(x == arr[indekTengah]) {
      found = true;
      indekX = indekTengah;
    } else if(arr[indekTengah] > x) {
      indekTerbesar = indekTengah - 1;
    } else if(arr[indekTengah] < x) {    
      indekTerkecil = indekTengah + 1;
    }
  }

  std::cout << found << std::endl;
  std::cout << "Indek ke:" << indekX << std::endl;
}
