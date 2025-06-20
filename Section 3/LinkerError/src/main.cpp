#include <iostream>

extern int x;

int main() {

    std::cout << "Hello world" << std::endl;

    std::cout << x;

    return 0;
    // Linker error - it cannot find x becasue x is outside, said it is supposed to be somewhere else.
    // NOT a compiler error. It is a linker error - does not know where to find the file that is supposed to be linked.
}