#include <iostream>
#include <conio.h>
#include <algorithm>

int binary_search(int numbers[], int size, int value) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (numbers[mid] == value) {
            return mid;
        } else if (numbers[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // value not found
}

int main() {
    system("CLS");
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = std::size(numbers);
    int n;
    std::cout << "Choose the number : ";
    std::cin >> n;
    int index = binary_search(numbers, size, n);
    std::cout << "Index of " << n << " : " << index << std::endl;
    return 0;
}
