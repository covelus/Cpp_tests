// infinites_test.cc
// Some numeric play with C++ infinite representations, etc... Try it online at https://wandbox.org/ or in your UNIX Shell:
// $ g++ infinites_test.cc -Wall -Wextra -std=gnu++1

#include <iostream>
#include <limits>

#define INF  ((unsigned) ~0)

using namespace std;

int main ()
{
    std::cout << "- infinity int from ((unsigned) ~0)" << endl;
    std::cout << INF << endl;
    std::cout << "- infinity float from limits' numeric_limits<float>::infinity()" << endl;
    std::cout << std::numeric_limits<float>::infinity() << endl;
    std::cout << "- Is infinity float > infinity int?" << endl;
    std::cout << std::boolalpha;
    std::cout << bool(std::numeric_limits<float>::infinity() > INF) << endl;
}
