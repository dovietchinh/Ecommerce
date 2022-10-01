#include "my_utils.hpp"
#include <iostream>
using namespace std;

int main(int argc,char** argv){
    cout << "this is test unit" << endl;
    string abc = "this is a test string";
    vector<string> results = split_string(abc," ");
    for(auto x : results){
        cout << x << endl;
    };
    return 1;
}