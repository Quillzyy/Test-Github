#include <iostream>
#include <conio.h>
#include <algorithm>

int sequential_search(int numbers[], int size, int value) {
    // Look at each element in the array one by one
    for (int i = 0; i < size; i++) {
        if (numbers[i] == value) {
            // Return the index if the element is found
            return i;
        }
    }

    // Return -1 if the element is not found
    return -1;
}

int main() {
  system("CLS");
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = std::size(numbers);
  int n;
  std::cout << "Choose the number : ";
  std::cin >> n;
  int index = sequential_search(numbers, size, n);
  std::cout << "Index of " << n << " : " << index << std::endl;
  return 0;
}
