#include <iostream>
#include <memory>

#include "Anchor.h"
#include "Apple.h"
#include "Axle.h"

int main() {
    std::unique_ptr<Alpha> a{nullptr};

    a = std::make_unique<Anchor>();
    a->print();

    a = std::make_unique<Apple>();
    a->print();

    a = std::make_unique<Axle>();
    a->print();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}