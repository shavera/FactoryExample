#include <iostream>
#include <memory>

#include "Alpha.h"
#include "Apple.h"
#include "Axle.h"

int main() {
    std::unique_ptr<Alpha> a{nullptr};

    a.reset(AlphaFactory::instance().Create("Anchor"));
    a->print();

    a.reset(AlphaFactory::instance().Create("Apple"));
    a->print();

    a.reset(AlphaFactory::instance().Create("Axle"));
    a->print();

    return 0;
}