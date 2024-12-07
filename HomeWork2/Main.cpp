#include <iostream>
#include "Array.h"

int main() {
    Array arr1(5);
    std::cout << "Empty array: ";
    arr1.display();

    Array arr2(10, 2, 100);
    std::cout << "Random array: ";
    arr2.display();

    Array arr3(7, 42);
    std::cout << "Array with value 42: ";
    arr3.display();

    arr2.sort();
    std::cout << "Sorted array: ";
    arr2.display();

    std::cout << "Min: " << arr2.getMin() << std::endl;
    std::cout << "Max: " << arr2.getMax() << std::endl;

    arr2.resize(15);
    std::cout << "Resized array: ";
    arr2.display();

    return 0;
}
