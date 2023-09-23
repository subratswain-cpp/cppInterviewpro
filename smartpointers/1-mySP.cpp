/**
 * @author Subrat Swain (info@cppwithsubrat.com)
 * @brief Own Smart Pointer(Incomplite-intensionally). To demonostrate copy and assign issues.
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

class SmartPtr {

public:
    explicit SmartPtr(int *p) : ptr{p} {  }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferencing operator
    int &operator*() { return *ptr; }

private:
    int *ptr; // Raw pointer

};

int main() {
    // auto* p = new int();
    SmartPtr sptr(new int());
    *sptr = 2020; // operator*(this)=>operator*(&ptr)
    std::cout << *sptr;
// delete p; // Possibility-1 - Double deletion Issue
// SmartPtr sptr1; // passing valid heap address.
// std::cout << *sptr1 << '\n'; // SegFault
    return 0;
}
/**WHAT WE DISCUSSED:
 * 1. What is explicit constructor.
 * 2. Why explicit constructor is used in SmartPointers.
 * 3. Double deletion scenario
 * 4. Segmentation Fault
 * 5. Why dereferencing operator returning reference
*/