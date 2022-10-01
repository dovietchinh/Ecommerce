#ifndef __MYUTILS_H__
#define __MYUTILS_H__
#include <vector>
#include <string>
using namespace std;
typedef struct {
    int day;
    int month;
    int year;
}Time;

vector<string> split_string(string line,string temp);



#endif