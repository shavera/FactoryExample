//
// Created by Alex Shaver on 8/30/17.
//

#include "Anchor.h"

#include <iostream>

namespace {
    const std::string RegistrationName{"Anchor"};
    RegisterInFactory<Alpha, Anchor> registerMe{RegistrationName};
}

void Anchor::print() {
    std::cout << "Printing Anchor" << std::endl;
}
