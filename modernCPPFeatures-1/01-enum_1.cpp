#include <iostream>

// Pre-Modern C++

enum Day {
    SUNDAY,
    MONDAY,
    TUE,
    WED,
    THUS,
    FRI,
    SAT    
};

enum Month {
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

    Day d{WED}; // Treated as integers.
    Month m{APR};
    
    std::cout << "Day:: " << d << " Month:" << m << '\n';

    if(d == m) {
        std::cout << "WED==APR\n"; // Prints this-Which is technically wrong
    } else {
        std::cout << "WED!=APR\n";
    }
    return 0;
}
