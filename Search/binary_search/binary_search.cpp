#include <iostream>
#include <vector>

int BinarySearch(int *arr, int n, int guess) {
  int upper = n;
  int lower = 0;
  int mid;
  while (lower < upper) {
    mid = (upper + lower) / 2;
    if (arr[mid] == guess) {
      return mid;
    }
    if (arr[mid] < arr[guess]) {
      lower = mid;
    } else {
      upper = mid;
    }
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::cout << BinarySearch(arr, n, 7);
  return 0;
}