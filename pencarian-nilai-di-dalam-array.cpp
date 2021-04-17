/*
PROGRAM pencarian-nilai-di-dalam-array

Variabel:
  arr: integer            {array}
  cari: integer           {Nilai yang dicari}
  counter: integer        {Penghitung iterasi}
  hasil: integer          
  len: integer            {Panjang elemen array}
Algoritma:
  Input(cari)

  while (counter < len) do:
    if (arr[counter] == cari) then:
      hasil ← counter
      break
    hasil ← -1
    counter = counter + 1
  
  Output(hasil);
*/

#include <iostream>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int cari, counter, hasil;
  int len = sizeof(arr)/sizeof(arr[0]);

  std::cin >> cari;

  counter = 0;
  while(counter < len) {
    if(arr[counter] == cari) {
      hasil = counter;
      break;
    }
    hasil = -1;
    counter++;
  }

  std::cout << hasil << std::endl;
}
