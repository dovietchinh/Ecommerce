#include "promotions.hpp"

string Promotions::getName(){
    return this->name;
};
int Promotions::getID(){
    return this->ID;
};
string Promotions::getDescription(){
    return this->description;
};
float Promotions::discount(Prices prices){
    float value = prices.getPrice();
    return this->discountPercent * value;
};
