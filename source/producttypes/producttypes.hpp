#ifndef __PRODUCTYPES_H__
#define __PRODUCTYPES_H__
#include <string>
using namespace std;
class ProductTypes{
    private:
        string name;
        string description;
        int ID;
    public:
        string getName();
        string getDescription();
        int getID();

        ProductTypes();
        ~ProductTypes();
};

#endif