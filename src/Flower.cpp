#include "Flower.h"

Flower::Flower(const std::string& name, float stemLength, double price)
    : name_(name), stemLength_(stemLength), price_(price) {}

std::string Flower::getName() const {
    return name_;
}

float Flower::getStemLength() const {
    return stemLength_;
}

double Flower::getPrice() const {
    return price_;
}
