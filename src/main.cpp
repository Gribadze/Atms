#include <iostream>
#include "Atm.h"

int main() {
    Atm a;
    std::cout << a.getStatus() << std::endl;
    a.toggleState();
    std::cout << a.getStatus() << std::endl;
    
    return 0;
}
