//
// Created by Alex Shaver on 8/30/17.
//

#include "Axle.h"

#include <iostream>

namespace {
    const std::string RegistrationName{"Axle"};
    RegisterInFactory<Alpha, Axle> registerMe{RegistrationName};
}

void Axle::print() {
    std::cout << "Axle" << std::endl;
}
