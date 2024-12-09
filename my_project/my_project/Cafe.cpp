#include "Cafe.h"
#include <iostream>
#include <fstream>

using namespace std;

Cafe::Cafe() {
    // 5 столиків для прикладу
    for (int i = 1; i <= 5; ++i) {
        tables.push_back(Table(i));
    }
}

void Cafe::displayMenu() {
    cout << "Menu:" << endl;
    for (const auto& item : menu) {
        cout << item.getName() << " - " << item.getPrice() << " GBP" << endl;
    }
}

void Cafe::chooseTable(int tableNumber) {
    if (tableNumber > 0 && tableNumber <= tables.size()) {
        tables[tableNumber - 1].occupy();
        cout << "Table " << tableNumber << " is now occupied." << endl;
    }
    else {
        cout << "Invalid table number." << endl;
    }
}

void Cafe::orderFood(const string& itemName) {
    for (const auto& item : menu) {
        if (item.getName() == itemName) {
            cout << "You have ordered " << item.getName() << "." << endl;
            return;
        }
    }
    cout << "Item not found in the menu." << endl;
}

void Cafe::giveFeedback(CustomerFeedback* feedback) {
    feedback->giveFeedback();
}

void Cafe::leaveTip() {
    cout << "Thank you for your tip!" << endl;
}

void Cafe::leaveTable(int tableNumber) {
    if (tableNumber > 0 && tableNumber <= tables.size() && tables[tableNumber - 1].getStatus()) {
        tables[tableNumber - 1].vacate();
        cout << "You have left table " << tableNumber << "." << endl;
    }
    else {
        cout << "Invalid table number or table is not occupied." << endl;
    }
}
