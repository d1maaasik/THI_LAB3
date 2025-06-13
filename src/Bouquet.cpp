#include "Bouquet.h"
#include <iostream>

void Bouquet::addFlower(std::shared_ptr<Flower> flower) {
    flowers_.push_back(flower);
}

void Bouquet::showBouquet() const {
    std::cout << "Bouquet contains:\n";
    for (const auto& flower : flowers_) {
        std::cout << "- " << flower->getType() << " \"" << flower->getName()
                  << "\" (" << flower->getStemLength() << " cm, $" << flower->getPrice() << ")\n";
    }
}
