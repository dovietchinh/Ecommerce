#ifndef __USERS_H__
#define __USERS_H__
#include <string> 
#include "my_utils.hpp"
using namespace std; 

class Users{  
    /*
    Users is a abstract class;
    */
    private:
        string name;
        string phone;
        string adress;
        Time time;
    public:
        string getName();
        string getPhone();
        string getAdress();
        Time getTime();
        virtual void registry();
      

};

class Staff : Users{
    private:
        string title;
        string department;
    public:
        string getTitle();
        string getDepartment();

};

class Customer : Users{
    private:
        float account;
    public:
        float getAccount();
        
};


#endif