
#include "00-deallocation-test.h"

class SmartPtr { 
	deallocation_test* ptr; //Raw pointer 
public: 
	explicit SmartPtr(deallocation_test* p) : ptr{p} {  } 

	// Destructor 
	~SmartPtr() { delete (ptr); } 

	// Overloading dereferencing operator 
	deallocation_test& operator*() { return *ptr; } 
	deallocation_test* operator->() { return ptr; } 
};

int main() {
    // auto* p = new deallocation_test{100}; // {100}; // ());
     auto p = SmartPtr(new deallocation_test{1001}); // {100}; // ());

    std::cout << (*p).getVal() << '\n';
    std::cout << p->getVal() << '\n';

}