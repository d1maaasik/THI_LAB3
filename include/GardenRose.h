#pragma once
#include "Rose.h"

class GardenRose : public Rose {
public:
    GardenRose(const std::string& name, float stemLength, double price);
    std::string getType() const override;
};
