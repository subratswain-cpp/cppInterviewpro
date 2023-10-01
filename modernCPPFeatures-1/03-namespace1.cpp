/*****
 * NAMESPACE: To avoid naming conflict.(Class/structure,enum,union,object)
 */
#include <iostream>

// using namespace std; // dangerous. Never use it.
using std::cout;
using std::vector;
// using std::cv_status; // Error

// Modern C++
namespace MyEnums
{
    enum class Day
    {
        SUNDAY,
        MONDAY,
        TUE,
        WED,
        THUS,
        FRI,
        SAT
    };

    enum class Month
    {
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

    enum class cv_status
    {
        OK,
        NOT_OK
    };

}

int main()
{
    using namespace MyEnums;

    MyEnums::cv_status cv{cv_status::NOT_OK};
    std::cout << "cv_status=" << static_cast<int>(cvs) << '\n';
    // using namespace std; // Make it local as much as possible in worst case.
    // Use fully qualified name: std::cout std::cin std::vector

    // Borrowed from prev lecture.
    Day d{Day::WED}; // Treated as integers.

    std::cout << "Day:: " << (int)d << '\n';              // C style typecasting
    std::cout << "Day:: " << static_cast<int>(d) << '\n'; // C++ style typecasting

    Day d2{}; // Uniform Initialization
    std::cout << "Day:: " << static_cast<int>(d2) << '\n';

    if (d == d2)
    {
        std::cout << "WED==0\n";
    }
    else
    {
        std::cout << "WED!=0\n";
    }

    Day d3{Day::SUNDAY}; // Uniform Initialization
    if (d3 == d2)
    {
        std::cout << "0==SUNDAY\n";
    }
    else
    {
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
