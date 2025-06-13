#include "DutchTulip.h"

DutchTulip::DutchTulip(const std::string& name, float stemLength, double price)
    : Tulip(name, stemLength, price) {}

std::string DutchTulip::getType() const {
    return "Dutch Tulip";
}
