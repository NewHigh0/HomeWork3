#pragma once
#include <iostream>

class String {
private:
    char* str;
    size_t size;
public:
    String();
    String(size_t customSize);
    String(const char* input);
    String(const String& other);
    ~String();

    String& operator=(const String& other);
    String operator+(const String& other) const;
    String& operator+=(const String& other);
    char& operator[](size_t index);
    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;
    bool operator>(const String& other) const;
    bool operator<(const String& other) const;

    void input();
    void output() const;
    size_t length() const;

    friend std::ostream& operator<<(std::ostream& os, const String& string);
};
