#include <iostream>
// assert(); // Runtime func

void dangerousFun(int* _p) {
    std::cout << "In " << __func__ << ":" <<  *_p << '\n';
    //
    //
    //
    //
    // delete _p; // For fixing bug
    // _p = nullptr;
    // std::cout << _p << '\n';

}

#include <cassert> // don't use assert.h=>cassert.

int main() {
    int* p {nullptr};
    p = new int{5};
    std::cout << "In " << __func__ << ":"   << *p << '\n';
//
    // calling function by passing p()
//
    dangerousFun(p);
    p = nullptr;
    std::cout << p << '\n';
    // delete p;
    assert(p!=nullptr); // Runtime. Tip: condition fails=>Assertion raise.
    std::cout << *p << '\n'; // Segmentation fault: if p == nullptr
    
    return 0;
}
