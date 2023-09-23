#include <iostream>

class deallocation_test {
    public:
    explicit deallocation_test(const int32_t v) : value(v) {
      std::cout << "Constructor: " << v << '\n';
    }

    ~deallocation_test() {
        // std::cout << "Destructor: " << '\n';
        std::cout << "Destructor: " << value << '\n';
    }

    int32_t getVal() { return value; }

    private:
    // int32_t value{10}; // Uniform Initialization.
    int32_t value; // = 10; // Assignment
};
// Class : Template.

