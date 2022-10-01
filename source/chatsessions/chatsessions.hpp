#ifndef __CHATSESSIONS_H__
#define __CHATSESSIONS_H__
#include <vector>
#include <string>
#include <map>
#include "users.hpp"
using namespace std;

class Message{
    public:
        Users user;
        string message;
        Message(Users,string);
};

class ChatSessions{
    private: 
        int ID;
        vector<Message> messages;
        vector<Users> users;
    private:
        void sendMessage(Users user,string message);
        int getID();
};



#endif