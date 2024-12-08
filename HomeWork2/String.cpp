#include "String.h"
#include <iostream>
#include <cstring>

String::String() : String(80) {}

String::String(size_t customSize) : size(customSize + 1) {
    str = new char[size];
    str[0] = '\0';
}

String::String(const char* input) : size(strlen(input) + 1) {
    str = new char[size];
    strcpy_s(str, size, input);
}

String::String(const String& other) : size(other.size) {
    str = new char[size];
    strcpy_s(str, size, other.str);
}

String::~String() {
    delete[] str;
}

String& String::operator=(const String& other) {
    if (this == &other) {
        return *this;
    }
    delete[] str;
    size = other.size;
    str = new char[size];
    strcpy_s(str, size, other.str);
    return *this;
}

String String::operator+(const String& other) const {
    size_t newSize = length() + other.length() + 1;
    char* concatenated = new char[newSize];
    strcpy_s(concatenated, size, str);
    strcat_s(concatenated, newSize, other.str);

    String result(concatenated);
    delete[] concatenated;
    return result;
}

String& String::operator+=(const String& other) {
    size_t newSize = length() + other.length() + 1;
    char* concatenated = new char[newSize];
    strcpy_s(concatenated, size, str);
    strcat_s(concatenated, newSize, other.str);

    delete[] str;
    str = concatenated;
    size = newSize;
    return *this;
}

char& String::operator[](size_t index) {
    if (index >= length()) {
        throw std::out_of_range("Index out of bounds");
    }
    return str[index];
}

bool String::operator==(const String& other) const {
    return strcmp(str, other.str) == 0;
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}

bool String::operator>(const String& other) const {
    return length() > other.length();
}

bool String::operator<(const String& other) const {
    return length() < other.length();
}

std::ostream& operator<<(std::ostream& os, const String& string) {
    os << string.str;
    return os;
}

void String::input() {
    std::cout << "Enter a String: ";
    std::cin.getline(str, size);
}

void String::output() const {
    std::cout << "String: " << str << std::endl;
}

size_t String::length() const {
    return strlen(str);
}
