#include <iostream>
#include "DutchTulipFactory.h"
#include "GardenRoseFactory.h"
#include "Bouquet.h"

int main() {
    DutchTulipFactory tulipFactory;
    GardenRoseFactory roseFactory;

    auto tulip = tulipFactory.CreateFlower("Sunny", 25.5f, 3.75);
    auto rose = roseFactory.CreateFlower("Red Queen", 30.0f, 5.0);

    Bouquet bouquet;
    bouquet.addFlower(tulip);
    bouquet.addFlower(rose);
    
    bouquet.showBouquet();

    return 0;
}
