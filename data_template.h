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
     data(const data &);
    ~data();
virtual void display();
virtual int  create();
//virtual int  edit(/**/);
virtual int  remove();
virtual int  compare(const data &);
virtual int  copy(const data &);

private:

};


#endif
