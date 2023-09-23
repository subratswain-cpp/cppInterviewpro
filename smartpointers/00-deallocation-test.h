/**
 * @author Subrat Swain (info@cppwithsubrat.com)
 * @brief Class To Ensure Our SmartPointer Class Is Working Fine Without Memory Leak
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

class deallocation_test {
    public:
    explicit deallocation_test(const int32_t v) : value(v) {
      std::cout << "Constructor: " << v << '\n';
    }

    ~deallocation_test() {
        std::cout << "Destructor: " << value << '\n';
    }

    int32_t getVal() { return value; }

    private:
    // int32_t value{10}; // Uniform Initialization.
    int32_t value; // = 10; // Assignment
};
// Class : Template.
