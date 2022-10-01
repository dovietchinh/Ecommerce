#include "product.hpp"

float Products::getPrice(){
    
    return this->promotion.discount(this->price);
}