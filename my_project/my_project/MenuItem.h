#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

using namespace std;

class MenuItem {
private:
    string name;
    double price;
public:
    MenuItem(const string& name, double price);
    string getName() const;
    double getPrice() const;
};

#endif
