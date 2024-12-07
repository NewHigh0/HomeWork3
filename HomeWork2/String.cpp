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
