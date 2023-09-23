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
