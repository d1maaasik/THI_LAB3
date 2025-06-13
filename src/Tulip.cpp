#include "Tulip.h"

Tulip::Tulip(const std::string& name, float stemLength, double price)
    : Flower(name, stemLength, price) {}

std::string Tulip::getType() const {
    return "Tulip";
}
