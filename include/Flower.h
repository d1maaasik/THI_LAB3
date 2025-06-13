#pragma once
#include <string>

class Flower {
public:
    Flower(const std::string& name, float stemLength, double price);
    virtual ~Flower() = default;

    virtual std::string getType() const = 0;

    std::string getName() const;
    float getStemLength() const;
    double getPrice() const;

protected:
    std::string name_;
    float stemLength_;
    double price_;
};
