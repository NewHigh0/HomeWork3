#include "Array.h"
#include <iostream>

int main() {
    srand(time(0));

    Array arr1(5, 1, 10);
    Array arr2(5, 5, 15);

    std::cout << "Array 1: " << arr1 << std::endl;
    std::cout << "Array 2: " << arr2 << std::endl;

    Array arr3 = arr1;
    std::cout << "copy of arr1: " << arr3 << std::endl;

    Array arr4 = arr1 + arr2;
    std::cout << "arr1 + arr2: " << arr4 << std::endl;

    arr1 += arr2;
    std::cout << "arr1 += arr2: " << arr1 << std::endl;

    std::cout << "arr1[2] = " << arr1[2] << std::endl;

    std::cout << "arr1 == arr3: " << (arr1 == arr3 ? "true" : "false") << std::endl;

    std::cout << "arr1 != arr3: " << (arr1 != arr3 ? "true" : "false") << std::endl;

    std::cout << "arr1 > arr2: " << (arr1 > arr2 ? "true" : "false") << std::endl;

    std::cout << "arr1 < arr2: " << (arr1 < arr2 ? "true" : "false") << std::endl;

    return 0;
}
