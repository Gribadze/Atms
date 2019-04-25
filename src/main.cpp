#include <iostream>
#include "Async.h"

void greet() {
    std::cout << "Hello, World" << std::endl;
}

int main() {
    Async f(greet, 1);
    while (!f.isPendingEnded()) {
        std::time_t now = std::time(0);
        std::cout << now << std::endl;
    }
    f.run();
    return 0;
}
