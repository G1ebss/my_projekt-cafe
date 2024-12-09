#include "MenuItem.h"

MenuItem::MenuItem(const string& name, double price) : name(name), price(price) {}

string MenuItem::getName() const {
    return name;
}

double MenuItem::getPrice() const {
    return price;
}
