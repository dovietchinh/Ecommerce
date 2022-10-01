#ifndef __PROVIDERS_H__
#define __PROVIDERS_H__
#include <string>
using namespace std;

class Providers{
    private:
        string name;
        string description;
        int ID;
    public:
        string getName();
        string getDescription();
        int getID();

};

#endif