#include <iostream>
#include <cassert>

void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void SelectionSort(int *arr, int n) {
  for (int j = 0; j < n - 1; ++j) {
    int min_inx = j;
    for (int i = j + 1; i < n; ++i) {
      if (arr[i] < arr[min_inx]) {
        min_inx = i;
      }
    }
    Swap(arr[j], arr[min_inx]);
  }
}

int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  SelectionSort(arr, n);
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  assert(std::is_sorted(arr, arr + n));
}
