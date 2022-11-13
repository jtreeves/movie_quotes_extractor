#include <string>
#include <iostream>
#include "../Print.hpp"

using namespace SomePackage;

void Print::sayHelloToName(std::string name) {
    std::cout << "Hello, " << name << "!\n";
};
