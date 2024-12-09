#ifndef CUSTOMERFEEDBACK_H
#define CUSTOMERFEEDBACK_H

using namespace std;

class CustomerFeedback {
public:
    virtual void giveFeedback() = 0;
};

class Complaint : public CustomerFeedback {
public:
    void giveFeedback() override;
};

class Tip : public CustomerFeedback {
public:
    void giveFeedback() override;
};

#endif
