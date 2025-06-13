#include "GardenRose.h"

GardenRose::GardenRose(const std::string& name, float stemLength, double price)
    : Rose(name, stemLength, price) {}

std::string GardenRose::getType() const {
    return "Garden Rose";
}
