#pragma once
#include "Flower.h"

class Rose : public Flower {
public:
    Rose(const std::string& name, float stemLength, double price);
    std::string getType() const override;
};
