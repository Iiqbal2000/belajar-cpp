#include <iostream>

/*
PROGRAM bubbleSort
  { Mengurutkan elemen array dari mulai terkecil hingga terbesar }

VARIABEL:
  arr: integer
  temp: integer {untuk menyimpan elemen sementara}
  n: integer {ukuran array}

ALGORITMA:
  repeat step = 0; step < n; step++:
    repeat index = 0; index < n - step - 1; index++:
      if arr[index] > arr[index + 1]:
        temp = arr[index]
        arr[index] = arr[index + 1]
        arr[index + 1] = temp;
*/

int main() {
  int arr[5] = {4, 5, 3, 5, 6};
  // int arr[5] = {5, 1, 4, 2, 8};
  int temp;
  int n = 5;

  for(int step = 0; step < n; step++) {
    for(int i = 0; i < n-step-1; i++)  {
      if(arr[i] > arr[i+1]) {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
    }
    
  }
  
  // untuk menampilkan array hasil
  for(int y = 0; y < 5; y++) {
    std::cout << arr[y] << std::endl;
  }
  
}
