#pragma once
#include "FlowerFactory.h"
#include "GardenRose.h"

class GardenRoseFactory : public FlowerFactory {
public:
    std::shared_ptr<Flower> CreateFlower(const std::string& name, float stemLength, double price) const override;
};
