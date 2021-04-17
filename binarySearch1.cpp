/*
PROGRAM binarySearch1
  {Mencari nilai (x) di dalam array yang telah terurut kecil ke besar. Hasil bernilai 1 jika ditemukan dan mencetak indek nilai tersebut}

VARIABEL:
  arr: array integer
  n: integer {ukuran array}
  x: integer {nilai yang dicari}
  indekX: integer {nilai indek}
  found: boolean
  atas: integer {indek atas}
  bawah: integer  {indek bawah}
  tengah: integer {indek tengah}

ALGORITMA:
  atas ← 1
  bawah ← n
  found ← false
  indekX ← 0

  while(atas <= bawah && !found) {
    tengah ← (atas + bawah) / 2

    if(x == arr[tengah]) {
      found ← true
      indekX ← tengah

    } else if(x < arr[tengah]) {
      bawah ← tengah - 1

    } else if(x > arr[tengah]) {
      atas ← tengah + 1
    }
  }

*/

#include <iostream>

int main() {
  int n;
  int arr[n];
  int x;
  int indekX, atas, bawah, tengah;
  bool found;

  std::cout << "Ukuran array: ";
  std::cin >> n;

  std::cout << "Masukkan elemen array: " << std::endl;
  for(int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Nilai yang dicari: ";
  std::cin >> x;

  atas = 1;
  bawah = n;
  found = false;
  indekX = -1;

  while(atas <= bawah && !found) {
    tengah = (atas + bawah) / 2;

    if(x == arr[tengah]) {
      found = true;
      indekX = tengah;
    } else if(x < arr[tengah]) {
      bawah = tengah - 1;
    } else if(x > arr[tengah]) {
      atas = tengah + 1;
    }
  }

  std::cout << found << std::endl;
  std::cout << indekX << std::endl;
}
