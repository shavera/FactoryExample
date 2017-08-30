#include <iostream>
#include <memory>

#include "Alpha.h"

int main() {
    std::unique_ptr<Alpha> a{nullptr};

    a = AlphaFactory::instance().Create("Anchor");
    a->print();

    a = AlphaFactory::instance().Create("Apple");
    a->print();

    a = AlphaFactory::instance().Create("Axle");
    a->print();

    return 0;
}