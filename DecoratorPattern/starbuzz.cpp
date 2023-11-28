#include <iostream>

#include "Beverages.h"
#include "Condiments.h"

#include <memory>
#include <iostream>

void PrintBeverage(Beverage *beverage) {
    if (beverage == nullptr) return;

    std::cout << beverage->GetDescription() << " $" << beverage->Cost() << std::endl;
}

int main() {
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>(Beverage::Size::GRANDE);

    PrintBeverage(beverage.get());

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>(Beverage::Size::VENTI);
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));

    PrintBeverage(beverage2.get());

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>(Beverage::Size::TALL);
    beverage3 = std::make_unique<Soy>(std::move(beverage3));
    beverage3 = std::make_unique<Mocha>(std::move(beverage3));
    beverage3 = std::make_unique<Whip>(std::move(beverage3));

    PrintBeverage(beverage3.get());
}
