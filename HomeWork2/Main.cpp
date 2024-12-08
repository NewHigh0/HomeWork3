#include <iostream>
#include "String.h"

int main() {
    String s1("Hello");
    String s2("World");
    String s3;

    s3 = s1;
    std::cout << "s3 = " << s3 << std::endl;

    String s4 = s1 + s2;
    std::cout << "s1 + s2: " << s4 << std::endl;

    s1 += s2;
    std::cout << "s1 += s2: " << s1 << std::endl;

    char ch = s1[1];
    std::cout << "Character at index 1 in s1: " << ch << std::endl;

    std::cout << "s1 == s3: " << (s1 == s3 ? "true" : "false") << std::endl;

    std::cout << "s1 != s2: " << (s1 != s2 ? "true" : "false") << std::endl;

    std::cout << "s1 > s2: " << (s1 > s2 ? "true" : "false") << std::endl;

    std::cout << "s1 < s2: " << (s1 < s2 ? "true" : "false") << std::endl;

    return 0;
}
