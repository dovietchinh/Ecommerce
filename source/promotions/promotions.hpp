#ifndef __PROMOTIONS_H__
#define __PROMOTIONS_H__
#include <string>
#include "prices.hpp"
using namespace std;

class Promotions{
    private:
        string name;
        string description;
        int ID;
        float discountPercent;
    public:
        Promotions();
        ~Promotions();
        float discount(Prices);
        string getName();
        string getDescription();
        int getID();
        
};
#endif