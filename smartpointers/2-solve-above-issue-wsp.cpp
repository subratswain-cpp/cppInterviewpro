/**
 * @author Subrat Swain (info@cppwithsubrat.com)
 * @brief SOLVE WITHOUT USING STANDARD PROVIDED SPs
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "00-deallocation-test.h"

class SmartPtr { 
	deallocation_test* ptr; // Raw pointer 
public: 
	explicit SmartPtr(deallocation_test* p) : ptr{p} {  } 

	// Destructor 
	~SmartPtr() { delete (ptr); } 

	// Overloading dereferencing operator 
	deallocation_test& operator*() { return *ptr; } 
	deallocation_test* operator->() { return ptr; } 
};

int main() {
    // auto* p = new deallocation_test{100};
     auto p = SmartPtr(new deallocation_test{1001});

    std::cout << (*p).getVal() << '\n';
    std::cout << p->getVal() << '\n';

}

/** WHAT WE DISCUSSED:
 * 1. Use of dereferencing operator & ->
 * 2. When to use * & when to use -> operators
 * 3. After object name * or ->?(We are using both. It is SMART :))
 * 4. Before C++11, concept of SP was there - COM In Windows.
*/