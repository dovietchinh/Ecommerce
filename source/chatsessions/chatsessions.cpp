#include "chatsessions.hpp"

int ChatSessions::getID(){
    return this->ID;
};
void ChatSessions::sendMessage(Users user, string message){
    Message temp(user,message);
    this->messages.push_back(temp);
};

Message::Message(Users a,string b){
    this->user = a;
    this->message = b;
};

