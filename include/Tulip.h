#pragma once
#include "Flower.h"

class Tulip : public Flower {
public:
    Tulip(const std::string& name, float stemLength, double price);
    std::string getType() const override;
};
