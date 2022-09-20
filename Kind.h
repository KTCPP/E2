#pragma once
#include "Test.h"
class Kind :
    public TestKlasse
{
public:
    Kind(std::string name) : TestKlasse(name) {
        std::cout << "Kind zerstoert" << std::endl;
    }
};

