#ifndef TABLE_H
#define TABLE_H

using namespace std;

class Table {
private:
    int tableNumber;
    bool isOccupied;
public:
    Table(int number);
    void occupy();
    void vacate();
    bool getStatus() const;
    int getTableNumber() const;
};

#endif

