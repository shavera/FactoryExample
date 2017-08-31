//
// Created by Alex Shaver on 8/30/17.
//

#include "Beta.h"

#include "Alpha.h"

void Beta::printFromAlphaOfType(const std::string& alphaType) {
    auto a = AlphaFactory::instance().Create(alphaType);
    a->print();
}
