
#include "00-deallocation-test.h"
#include <memory>

template<typename T>
void my_print(T& _p) {
    std::cout << _p << '\n';
}

void concept1() {
    auto p = std::make_unique<deallocation_test>(100); // factory - Preferable
    // std::unique_ptr<deallocation_test> p1{new deallocation_test{102}}; // No No No

    std::cout << p->getVal() << '\n';
    std::cout << p.get() << '\n'; // Raw Pointer
    // std::cout << &p << '\n';
    // if(p.get() == nullptr) {
    //     std::cout << "NULLLLL\n";
    // }  
    p.release();  // The release() function in std::unique_ptr is used to transfer ownership of the managed object to another std::unique_ptr or to a raw pointer.
    p.reset(new deallocation_test(200));
    my_print("After calling reset()");
    std::cout << p.get() << '\n';

    // delete p.get(); // forgot

}

void concept2() {

    auto uptr2 = std::make_unique<int>(1001);
    std::cout << *uptr2 << '\n';
    auto uptr3 = std::move(uptr2); //
     *uptr3 = 20030;
    my_print(*uptr3);
    // uptr2 = uptr3; // error - deleted copy assignment
    uptr2 = std::move(uptr3); // invalidates uptr3
    // std::cout << *uptr2 << '\n';
    my_print(*uptr2);
     
}

int main() {

    concept1();
    // concept2();
}

/***
 * NOTES:
 * 1. The release() function in std::unique_ptr is used to transfer ownership of the managed object to another std::unique_ptr or to a raw pointer.
 * 2. After calling release(), the std::unique_ptr no longer manages the object, and the responsibility of deleting the object is transferred to the caller.
 * 3. It's the caller's responsibility to ensure proper memory management after calling release().
 * 
 * Question to ISO community: release() should use [nodiscard] attribute?
 * relese returns raw pointer & if caller is not capturing it, definitely there will be memory LEAK.
https://stackoverflow.com/a/60536221
https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0600r1.pdf
This is basically the structure of libstdc++'s std::thread. run_a_thing is pthread_create.
*/