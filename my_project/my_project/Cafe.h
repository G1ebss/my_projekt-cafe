#ifndef CAFE_H
#define CAFE_H

#include "MenuItem.h"
#include "CustomerFeedback.h"
#include "Table.h"
#include <vector>
#include <string>

using namespace std;

class Cafe {
private:
    vector<MenuItem> menu;
    vector<Table> tables;

    void loadMenuFromFile(const string& filename);
    void saveMenuToFile(const string& filename);

public:
    Cafe();
    void displayMenu();
    void chooseTable(int tableNumber);
    void orderFood(const string& itemName);
    void giveFeedback(CustomerFeedback* feedback);
    void leaveTip();
    void leaveTable(int tableNumber);
};

#endif
