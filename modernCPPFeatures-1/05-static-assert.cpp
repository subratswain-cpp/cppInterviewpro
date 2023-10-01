#include <iostream>
// assert(); // Runtime func
// static_asset: compile time activity

int main() {

    static_assert(sizeof(void*) == 8, "64-bit OS");
    static_assert(sizeof(void*) == 4, "64-bit OS not supported");


    return 0;
}
