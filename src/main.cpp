#include <iostream>
// #include "movie_quotes_extractor.cpp"
// #include "Print.hpp"
// #include "Math.hpp"
#include "SomePackage.hpp"
// #include "print/sayPlainHello.cpp"
// #include "print/sayHelloToName.cpp"

using namespace SomePackage;

int main() {
    // std::cout << "Hello World!\n";
    // std::cout << "The sum of 2 and 3 is:\n";
    // MovieQuotesExtractor mqe = MovieQuotesExtractor();
    // int sum = mqe.add_two_numbers(2, 3);
    // std::cout << sum << "\n";
    Print printer = Print();
    printer.sayPlainHello();
    printer.sayHelloToName("Billy");
    Math mather = Math();
    int sum = mather.addTwoNumbers(7, 5);
    int difference = mather.subtractTwoNumbers(7, 5);
    std::cout << "The sum of 7 and 5 is " << sum <<"!\n";
    std::cout << "The difference of 7 and 5 is " << difference <<"!\n";

    return 0;
};
