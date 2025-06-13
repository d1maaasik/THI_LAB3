#include "DutchTulipFactory.h"

std::shared_ptr<Flower> DutchTulipFactory::CreateFlower(const std::string& name, float stemLength, double price) const {
    return std::make_shared<DutchTulip>(name, stemLength, price);
}
