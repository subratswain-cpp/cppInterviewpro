#include <iostream>

// Modern C++

enum class Day {
    SUNDAY,
    MONDAY,
    TUE,
    WED,
    THUS,
    FRI,
    SAT    
};

enum class Month {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JULY,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC    
};


int main() {

    Day d{Day::WED}; // Treated as integers.
    Month m{Month::APR};
    
    std::cout << "Day:: " << (int)d << '\n'; // C style typecasting
    std::cout << "Day:: " << static_cast<int>(d) << '\n' ; // C++ style typecasting
    
    Day d2{}; // Uniform Initialization
    std::cout << "Day:: " << static_cast<int>(d2) << '\n' ;

    if(d == d2) {
        std::cout << "WED==0\n";
    } else {
        std::cout << "WED!=0\n";        
    }
    
    Day d3{Day::SUNDAY}; // Uniform Initialization
    if(d3 == d2) {
        std::cout << "0==SUNDAY\n";
    } else {
        std::cout << "0!=SUNDAY\n";        
    }    
/*
    if(d == m) { // Compilation Error
        std::cout << "WED==APR\n"; // Prints this-Which is technically wrong
    } else {
        std::cout << "WED!=APR\n";
    }
*/  
    return 0;
}

// NEXT: NAMESPACE
