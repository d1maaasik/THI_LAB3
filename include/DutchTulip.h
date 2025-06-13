#pragma once
#include "Tulip.h"

class DutchTulip : public Tulip {
public:
    DutchTulip(const std::string& name, float stemLength, double price);
    std::string getType() const override;
};
