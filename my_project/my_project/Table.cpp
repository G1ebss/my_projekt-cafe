#include "Table.h"

using namespace std;

Table::Table(int number) : tableNumber(number), isOccupied(false) {}

void Table::occupy() {
    isOccupied = true;
}

void Table::vacate() {
    isOccupied = false;
}

bool Table::getStatus() const {
    return isOccupied;
}

int Table::getTableNumber() const {
    return tableNumber;
}
