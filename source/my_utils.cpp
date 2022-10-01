#include "my_utils.hpp"

using namespace std;


vector<string> split_string(string line,string temp){
    vector<string> results;
    int pos = line.find(temp);
    int length_temp = temp.length();
    while(pos!string::npos){
        string str = line.substr(0,pos);
        results.push_back(str);
        line = line.substr(pos+length_temp);
    };
    results.push_back(line);
    return results;
};


