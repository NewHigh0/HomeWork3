#pragma once
#include <iostream>

class Array {
private:
    int* data;
    size_t size;
    void clear();
public:
    Array();
    Array(size_t n);
    Array(size_t n, int min, int max);
    Array(size_t n, int x);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    Array& operator+=(const Array& other);
    int& operator[](size_t index);
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    bool operator>(const Array& other) const;
    bool operator<(const Array& other) const;

    void display() const;
    void fillRandom(int min, int max);
    void resize(size_t newSize);
    void sort();
    int getMin() const;
    int getMax() const;

    friend std::ostream& operator<<(std::ostream& os, const Array& array);
};
