//
// Created by Alex Shaver on 8/30/17.
//

#include "Apple.h"

#include <iostream>

namespace {
    const std::string RegistrationName{"Apple"};
    RegisterInFactory<Alpha, Apple> registerMe{RegistrationName};
}

void Apple::print() {
    std::cout << "Printing Apple" << std::endl;
}
