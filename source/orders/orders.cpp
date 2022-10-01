#include "orders.hpp"

int Orders::getID(){
    return this->ID;
};
vector<string> Orders::getProductName(){
    vector<string> results;
    for(Products product : this->products){
        string name = product.getName();
        results.push_back(name);
    }
    return results;
};
vector<float> Orders::getPrices(){
    vector<float> results;
    for (auto product : this->products){
        float price = product.getPrice();
        results.push_back(price);
    };
    return results;
};

float Orders::totalPrice(){
    vector<float> prices = this->getPrices();
    float result = 0;
    for(auto value : prices){
        result += value;
    };
    return result;
};

PayMents Orders::getPayment(){
    return this->payment;
};



