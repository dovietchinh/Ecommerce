#ifndef __STORE_H__
#define __STORE_H__
#include "product.hpp"
#include "producttypes.hpp"
#include "chatsessions.hpp"
#include "users.hpp"
#include "my_utils.hpp"
class Store{
    private:
        vector<Products> mProducts;
        vector<ProductTypes> mProductypes;
        vector<ChatSessions> mChatSessions;
        vector<Users> mUsers;

        Users* currentUsers;
        int stateMachine;

    public:
        Store();
        Users* createUser(int ID,string name,string adress,Time time);
        void logging(Users* pUser);
        void viewProducts(Users* pUser);
        void chatWithCustommer();
        void createOders();


};

#endif