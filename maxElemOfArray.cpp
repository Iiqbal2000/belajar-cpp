/*
PROGRAM maxElemOfArray
  {Mencari nilai maksimum di dalam array}

VARIABEL:
  arr: array integer
  n: integer {ukuran array}
  counter: integer
  max: integer

ALGORITMA:
  n ← 5
  arr[5] ← {5, 3, 6, 7, 8}
  max ← arr[0]
  counter ← 0
  while(counter < n) {
    if(max < arr[counter]) {
      max ← arr[counter]
    }
    counter++;
  }

  Output(max)
*/

#include <iostream>

int main() {
  int counter;
  int max;
  int n = 5;
  int arr[5] = {5, 3, 6, 7, 8};
  
  // inisialisasi elemen indek ke 0
  max = arr[0];

  counter = 0;
  while(counter < n) {
    if(max < arr[counter]) {
      max = arr[counter];
    }
    counter++;
  }

  std::cout << max << std::endl;

}
