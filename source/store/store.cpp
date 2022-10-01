#include "store.hpp"
#include <iostream>
using namespace std;


void static read_data(){
    vector<Products> listProducts;
    vector<ProductTypes> listProductTypes;
    vector<ChatSessions> listChatSessions;
    vector<Users> listUsers;

    ifstream f ("data.txt");
    if(!f.is_open()){
        return;
    };
    string temp;
    string status = "None";
    while(!getline(f,temp)){
        cout << temp << endl;
        vector<string> abc = split_string(temp," ");
        if(abc.size() ==1){
            status = temp;
        };
        switch (status)
        {
        case "User":
            /* code */
            break;
        case "Product":
            break;
        case "ProductTypes":
            break;
        default:
            return;
            break;
        }

    }

}

Store::Store(){
    
}