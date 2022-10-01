#include <string>
#include <iostream>
#include <store.hpp>
#include <vector>
#include <gflags/gflags.h>

DEFINE_string(app_name,"Ecommerce","this is app name");


using namespace std;




int main(int argc,char** argv){
    gflags::ParseCommandLineFlags(&argc,&argv,true);
    gflags::ShutDownCommandLineFlags();
    cout << FLAGS_app_name << endl;
    
    Store gStore;




    return 1;
}
