
#include "00-deallocation-test.h"

int main() {
    
    auto* p = new deallocation_test{100}; // {100}; // ());
    // deallocation_test* p = new deallocation_test{100}; // {100}; // ());

    std::cout << p->getVal() << '\n';
    // f1();
    // f2();
    // f3();
    // f4();
    // DataAccessFromNetworkAccess(timeout) // Timer expires // Throws Exception
// Process Data Retrived in previous instruction.

    // delete p; // forgot
}
// 2senarios we observed. 1. forgot to delete. 2. Exception.