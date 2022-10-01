#ifndef __PAYMENT_H__
#define __PAYMENT_H__
#include <string>
using namespace std;
class PayMents{
    public:
        string name;
        string description;
    private:
        string getName();
        string getDescription();
};


#endif