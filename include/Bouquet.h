#pragma once
#include <vector>
#include <memory>
#include "Flower.h"

class Bouquet {
public:
    void addFlower(std::shared_ptr<Flower> flower);
    void showBouquet() const;

private:
    std::vector<std::shared_ptr<Flower>> flowers_;
};
