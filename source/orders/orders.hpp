#ifndef __ODERS_H__
#define __ODERS_H__
#include "product.hpp"
#include "payments.hpp"
#include <vector>
using namespace std;

class Orders{
    private:
        int ID;
        vector<Products> products;
        PayMents payment;
        
    public:
        int getID();
        vector<string> getProductName();
        float totalPrice();
        vector<float> getPrices();
        PayMents getPayment();

};

#endif