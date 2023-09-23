/**
 * @author Subrat Swain (info@cppwithsubrat.com)
 * @brief Raw Pointer Issues
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "00-deallocation-test.h"

int main() {
    
    auto* p = new deallocation_test{100}; // (100); // ());
    // deallocation_test* p = new deallocation_test{100};

    std::cout << p->getVal() << '\n';
    // f1();
    // f2();
    // f3();
    // f4();
    // DataAccessFromNetwork(ref_2_data, timeout) // Timer expires // Throws Exception
// Process Data Retrived in previous instruction(ref_2_data).

    // delete p; // forgot
}
// 2senarios we observed. 1. forgot to delete. 2. Exception.