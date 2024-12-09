#include "Cafe.h"
#include "CustomerFeedback.h"

using namespace std;

int main() {
    Cafe myCafe;
    myCafe.chooseTable(1);
    myCafe.orderFood("Burger");
    Complaint complaint;
    myCafe.giveFeedback(&complaint);
    myCafe.leaveTip();
    myCafe.leaveTable(1);
    return 0;
}
