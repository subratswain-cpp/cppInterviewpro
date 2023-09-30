
/**
 * @author Subrat Swain (info@cppwithsubrat.com)
 * @brief Using std::unique_ptr
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
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
    // Wrong use of relese. Won't deallocate. Memory Leak.
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

/** WHAT WE DISCUSSED:
 * 1. Writing simple function template
 * 2. Why prefer make_unique
 * 3. release() - Not calling destructor
 * 4. get() - Raw pointer. Becareful - dont use manual delete.
 * 5. Why copy & = operators are deleted?
 * 6. passing inside function - std::move(), ref
 * 7. Issue after passing inside function 
 * 8. reset() - intro. Will see in next class
 * 9. Usecases of unique_ptr
*/
