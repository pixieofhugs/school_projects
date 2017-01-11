//Molly shove
//1/7/17
//CS202


#include <iostream>
#include <cctype>
#include <cstring>
#include "string.h"

using namespace std;

#ifndef data_H//include guard - first
#define data_H//include guard - seccond

class data
{
public:
     data(); 
     data(const data &);
    ~data();
virtual void display();
virtual int  create();
//virtual int  edit(/**/);
virtual int  remove();
virtual int  compare(const data &);
virtual int  copy(const data &);

private:
//my_straing name
};


#endif
