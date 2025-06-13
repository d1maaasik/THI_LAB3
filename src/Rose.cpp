#include "Rose.h"

Rose::Rose(const std::string& name, float stemLength, double price)
    : Flower(name, stemLength, price) {}

std::string Rose::getType() const {
    return "Rose";
}
