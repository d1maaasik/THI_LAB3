#include "GardenRoseFactory.h"

std::shared_ptr<Flower> GardenRoseFactory::CreateFlower(const std::string& name, float stemLength, double price) const {
    return std::make_shared<GardenRose>(name, stemLength, price);
}
