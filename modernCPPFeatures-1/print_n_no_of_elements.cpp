/**
 * @file print_n_no_of_elements.cpp
 * @author your name (you@domain.com)
 * @brief 
 *   WAF to print n number of elements passed to it.
 * Ex: print({1,2,3,4,5}); // Print 1 2 3 4 5

 * @version 0.1
 * @date 2023-09-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <initializer_list>
#include <vector>

// Overloading of function is possible with std::vector & std::initializer_list
void print(const std::vector<int>& vals) {
    std::cout << "std::vector version is called!\n";
    for(const auto itm : vals) {
        std::cout << itm << ' '; 
    }
    std::cout << '\n';
}

/**
 * 
 * initializer_list(Template) : Light weight(begin(),end() & size()). Minimal functionalities are there.
 * It can be used in place of array/vector. But having some limitations.
 * LIMITAION: It is immutable(Non changable)
 * USECASE:
 * If we have a vector data member. In constructor, instead of using vector as the parameter, we can better use std::initializer_list
 * */ 

void print(const std::initializer_list<int>& vals) {
    std::cout << "std::initializer_list version is called!\n";
    for(const auto itm : vals) {
        std::cout << itm << ' '; 
    }
    std::cout << '\n';
}

int main() {
    print({1,2,3,4,5});
    auto ints = {10,20,30,40,50};
    print(ints);

    // immutable
    auto ints2 = {100,200,300,400,500};
    for(auto itm : ints2) {
        // std::cout << itm << ' ';
        itm = 2000; // error if auto& and trying to change values.
    }
    print(ints2);

    // vector
    std::vector vints{12,13,14,15,16};
    // for(int& itm : ints2) {
    //     // std::cout << itm << ' ';
    //     itm = 2000;
    // } // TODO: TOPIC OF VECTOR SESSION
    // print(vints); 
    print({1,2,3,4,5}); // Passing objct

    // Functions available in IList
    std::cout << "No of elements in the packet: " << ints.size() << '\n';
    
}

/*
Range based for loop.
begin() & end()-Functions should be implemented to use range based for loop.
*/ 
