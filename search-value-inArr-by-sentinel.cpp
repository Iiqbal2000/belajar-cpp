/*
PROGRAM search-value-inARR-with-Sentinel
  {Program ini memerlukan input ukuran array, elemen array, nilai yang dicari di dalam array. Jika nilai yang dicari tidak ada di dalam array maka akan mengembalikan -1, jika ada maka yang dikembalikan adalah indek dari nilai tersebut.}

VARIABEL:
  nMax: integer {ukuran array}
  arr: array integer
  counter: integer {penghitung iterasi}
  nilaiDicari: integer
  hasil: integer {nilai yang dicetak}

ALGORITMA:
  Input(nMax)
  for(i = 0; i < nMax; i++) {
    Input(arr[i])
  }

  Input(nilaiDicari)
  arr[nMax + 1] = nilaiDicari
  counter = 0;

  while(arr[counter] is not equal nilaiDicari) {
    counter = counter + 1;
  }

  if(counter is less than nMax) {
    hasil = counter;
  } else {
    hasil = -1;
  }

  Output(hasil);

*/

#include <iostream>

int main() {
  int nMax;
  int arr[nMax];
  int counter;
  int nilaiDicari;
  int hasil;

  std::cout << "Ukuran array: ";
  std::cin >> nMax;

  std::cout << "Masukkan elemen array: " << std::endl;
  for(int i = 0; i < nMax; i++) {
    std::cin >> arr[i];
  }
  
  std::cout << "Nilai yang dicari: ";
  std::cin >> nilaiDicari;



  arr[nMax + 1] = nilaiDicari;
  counter = 0;
  
  while(arr[counter] != nilaiDicari)  {
    counter += 1;
  }

  if(counter < nMax) {
    hasil = counter;
  } else {
    hasil = -1;
  }

  std::cout << hasil << std::endl;
}
