#pragma once
#include <memory>
#include <string>
#include "Flower.h"

class FlowerFactory {
public:
    virtual ~FlowerFactory() = default;
    virtual std::shared_ptr<Flower> CreateFlower(const std::string& name, float stemLength, double price) const = 0;
};
