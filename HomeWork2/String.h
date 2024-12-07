#pragma once

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

    void input();
    void output() const;
    size_t length() const;
};