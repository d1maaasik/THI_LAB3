#pragma once
#include "FlowerFactory.h"
#include "DutchTulip.h"

class DutchTulipFactory : public FlowerFactory {
public:
    std::shared_ptr<Flower> CreateFlower(const std::string& name, float stemLength, double price) const override;
};
