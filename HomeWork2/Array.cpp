#include "Array.h"
#include <iostream>

void Array::clear() {
    delete[] data;
    data = nullptr;
    size = 0;
}

Array::Array() : data(nullptr), size(0) {}

Array::Array(size_t n) : size(n) {
    data = new int[size]{0};
}
Array::Array(size_t n, int min, int max) : size(n) {
    data = new int[size];
    fillRandom(min, max);
}
Array::Array(size_t n, int x) : size(n) {
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = x;
    }
}
Array::Array(const Array& other) : size(other.size) {
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

Array::~Array() {
    clear();
}

Array& Array::operator=(const Array& other) {
    if (this == &other) {
        return *this;
    }
    clear();
    size = other.size;
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
    return *this;
}

Array Array::operator+(const Array& other) const {
    size_t newSize = (size < other.size) ? size : other.size;
    Array result(newSize);
    for (size_t i = 0; i < newSize; ++i) {
        result.data[i] = data[i] + other.data[i];
    }
    return result;
}

Array& Array::operator+=(const Array& other) {
    size_t minSize = (size < other.size) ? size : other.size;
    for (size_t i = 0; i < minSize; ++i) {
        data[i] += other.data[i];
    }
    return *this;
}

int& Array::operator[](size_t index) {
    return data[index];
}

bool Array::operator==(const Array& other) const {
    if (size != other.size) return false;
    for (size_t i = 0; i < size; ++i) {
        if (data[i] != other.data[i]) return false;
    }
    return true;
}

bool Array::operator!=(const Array& other) const {
    return !(*this == other);
}

bool Array::operator>(const Array& other) const {
    return size > other.size;
}

bool Array::operator<(const Array& other) const {
    return size < other.size;
}

std::ostream& operator<<(std::ostream& os, const Array& array) {
    for (size_t i = 0; i < array.size; ++i) {
        os << array.data[i] << " ";
    }
    return os;
}

void Array::display() const {
    for (size_t i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

void Array::fillRandom(int min, int max) {
    for (size_t i = 0; i < size; ++i) {
        data[i] = rand() % (max - min + 1) + min;
    }
}

void Array::resize(size_t newSize) {
    int* newData = new int[newSize]{0};
    size_t minSize = (size < newSize) ? size : newSize;
    for (size_t i = 0; i < minSize; ++i) {
        newData[i] = data[i];
    }
    clear();
    data = newData;
    size = newSize;
}

void Array::sort() {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int Array::getMin() const {
    int minValue = data[0];
    for (size_t i = 1; i < size; ++i) {
        if (data[i] < minValue) {
            minValue = data[i];
        }
    }
    return minValue;
}

int Array::getMax() const {
    int maxValue = data[0];
    for (size_t i = 1; i < size; ++i) {
        if (data[i] > maxValue) {
            maxValue = data[i];
        }
    }
    return maxValue;
}
