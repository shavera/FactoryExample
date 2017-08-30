//
// Created by Alex Shaver on 8/30/17.
//

#ifndef FACTORYEXAMPLE_ALPHA_H
#define FACTORYEXAMPLE_ALPHA_H

#include "GenericFactory.h"

class Alpha {
public:
    virtual void print() = 0;
};

using AlphaFactory = GenericFactory<Alpha>;

#endif //FACTORYEXAMPLE_ALPHA_H
