//name
//date
//class


#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#ifndef data_H//include guard - first
#define data_H//include guard - seccond

class data
{
public:
     data();
    ~data();
void display();
int  create();
int  edit(/*data*/);
int  remove(/*data*/);
int  compare(/*data*/);
int  copy(/*&data*/);

private:
char* name
char* type
};


#endif
