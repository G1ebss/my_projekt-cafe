#include "CustomerFeedback.h"
#include <iostream>

using namespace std;

void Complaint::giveFeedback() {
    cout << "I'm not satisfied with the food/service." << endl;
}

void Tip::giveFeedback() {
    cout << "I would like to leave a tip." << endl;
}
