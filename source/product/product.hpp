#include <string>
#include "producttypes.hpp"
#include "prices.hpp"
#include "promotions.hpp"
#include "provider.hpp"
#include "producttypes.hpp"

using namespace std;



class Products{
    private:
        string name;
        int ID;
        Prices price;  
        Promotions promotion;
        Providers provider;
        ProductTypes productType;
        string description;

    public:
        Products();
        ~Products();
        string getName();
        void getInfo();
        float getPrice();
        Providers getProviders();
        Promotions getPromotions();
        ProductTypes getProductTypes();
        string getDescription();
        int getID();

};