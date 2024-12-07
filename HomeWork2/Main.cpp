#include <iostream>
#include "String.h"

int main() {
    String defaultString;
    defaultString.input();
    defaultString.output();

    String customString(50);
    customString.input();
    customString.output();

    String initializedString("Hello, World!");
    initializedString.output();

    String copiedString(initializedString);
    copiedString.output();

    return 0;
}
